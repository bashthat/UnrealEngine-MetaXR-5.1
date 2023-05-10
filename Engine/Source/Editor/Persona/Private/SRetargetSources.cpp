// Copyright Epic Games, Inc. All Rights Reserved.

#include "SRetargetSources.h"
#include "Misc/MessageDialog.h"
#include "Editor.h"
#include "EditorStyleSet.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"
#include "Styling/AppStyle.h"
#include "Widgets/Layout/SSeparator.h"
#include "Widgets/Input/SButton.h"
#include "Animation/DebugSkelMeshComponent.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/SToolTip.h"
#include "Widgets/Text/SInlineEditableTextBlock.h"
#include "Widgets/SWindow.h"
#include "IDocumentation.h"
#include "ScopedTransaction.h"
#include "SRetargetSourceWindow.h"
#include "AnimPreviewInstance.h"
#include "Animation/DebugSkelMeshComponent.h"
#include "IEditableSkeleton.h"
#include "PropertyCustomizationHelpers.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Modules/ModuleManager.h"
#include "SRigPicker.h"
#include "ReferenceSkeleton.h"
#include "AssetNotifications.h"
#include "Animation/Rig.h"
#include "BoneSelectionWidget.h"
#include "BoneMappingHelper.h"
#include "SSkeletonWidget.h"
#include "IContentBrowserSingleton.h"
#include "ContentBrowserModule.h"
#include "Framework/Application/SlateApplication.h"


#define LOCTEXT_NAMESPACE "SRetargetSources"

class FPersona;

DECLARE_DELEGATE_TwoParams(FOnBoneMappingChanged, FName /** NodeName */, FName /** BoneName **/);
DECLARE_DELEGATE_RetVal_OneParam(FName, FOnGetBoneMapping, FName /** Node Name **/);

void SRetargetSources::Construct(
	const FArguments& InArgs,
	const TSharedRef<IEditableSkeleton>& InEditableSkeleton,
	const TSharedRef<IPersonaPreviewScene>& InPreviewScene,
	FSimpleMulticastDelegate& InOnPostUndo)
{
	EditableSkeletonPtr = InEditableSkeleton;
	PreviewScenePtr = InPreviewScene;
	InOnPostUndo.Add(FSimpleDelegate::CreateSP(this, &SRetargetSources::PostUndo));


	const FString DocLink = TEXT("Shared/Editors/Persona");
	ChildSlot
	[
		SNew (SVerticalBox)

		+ SVerticalBox::Slot()
		.Padding(5, 5)
		.AutoHeight()
		[
			SNew(STextBlock)
			.TextStyle(FAppStyle::Get(), "Persona.RetargetManager.ImportantText")
		.Text(LOCTEXT("RetargetSource_Title", "Manage Retarget Sources"))
		]

	+ SVerticalBox::Slot()
		.Padding(5, 5)
		.AutoHeight()
		[
			// explainint this is retarget source window
			// and what it is
			SNew(STextBlock)
			.AutoWrapText(true)
		.ToolTip(IDocumentation::Get()->CreateToolTip(LOCTEXT("RetargetSource_Tooltip", "Add/Delete/Rename Retarget Sources."),
			NULL,
			DocLink,
			TEXT("RetargetSource")))
		.Font(FAppStyle::GetFontStyle(TEXT("Persona.RetargetManager.FilterFont")))
		.Text(LOCTEXT("RetargetSource_Description", "You can add/rename/delete Retarget Sources. When you have different proportional meshes per skeleton, you can use this setting to indicate if this animation is from a different source. For example, if your default skeleton is from a small guy, and if you have an animation for a big guy, you can create a Retarget Source from the big guy and set it for the animation. The Retargeting system will use this information when extracting animation. "))
		]

	+ SVerticalBox::Slot()
		.Padding(5, 5)
		.FillHeight(0.5)
		[
			// construct retarget source window
			SNew(SRetargetSourceWindow, InEditableSkeleton, InOnPostUndo)
		]

	+ SVerticalBox::Slot()
		.Padding(5, 5)
		.AutoHeight()
		[
			SNew(SSeparator)
			.Orientation(Orient_Horizontal)
		]

	+ SVerticalBox::Slot()
		.Padding(5, 5)
		.AutoHeight()
		[
			// explainint this is retarget source window
			// and what it is
			SNew(STextBlock)
			.TextStyle(FAppStyle::Get(), "Persona.RetargetManager.ImportantText")
		.Text(LOCTEXT("RigTemplate_Title", "Set up Rig"))
		]

	+ SVerticalBox::Slot()
		.Padding(5, 5)
		.AutoHeight()
		[
			// explainint this is retarget source window
			// and what it is
			SNew(STextBlock)
			.AutoWrapText(true)
		.ToolTip(IDocumentation::Get()->CreateToolTip(LOCTEXT("RigSetup_Tooltip", "Set up Rig for retargeting between skeletons."),
			NULL,
			DocLink,
			TEXT("RigSetup")))
		.Font(FAppStyle::GetFontStyle(TEXT("Persona.RetargetManager.FilterFont")))
		.Text(LOCTEXT("RigTemplate_Description", "You can set up a Rig for this skeleton, then when you retarget the animation to a different skeleton with the same Rig, it will use the information to convert data. "))
		]

	+ SVerticalBox::Slot()
		.FillHeight(1)
		.Padding(2, 5)
		[
			// construct rig manager window
			SNew(SRigWindow, InEditableSkeleton, InPreviewScene, InOnPostUndo)
		]

	+ SVerticalBox::Slot()
		.Padding(5, 5)
		.AutoHeight()
		[
			SNew(SSeparator)
			.Orientation(Orient_Horizontal)
		]

	+ SVerticalBox::Slot()
		.Padding(2, 5)
		.AutoHeight()
		[
			SNew(STextBlock)
			.TextStyle(FAppStyle::Get(), "Persona.RetargetManager.ImportantText")
			.Text(LOCTEXT("BasePose_Title", "Edit Retarget Base Pose"))
		]
	    + SVerticalBox::Slot()
		.Padding(2, 5)
		.AutoHeight()
		[
			// explainint this is retarget source window
			// and what it is
			SNew(STextBlock)
			.AutoWrapText(true)
		.ToolTip(IDocumentation::Get()->CreateToolTip(LOCTEXT("RetargetBasePose_Tooltip", "Set up base pose for retargeting."),
			NULL,
			DocLink,
			TEXT("SetupBasePose")))
		.Font(FAppStyle::GetFontStyle(TEXT("Persona.RetargetManager.FilterFont")))
		.Text(LOCTEXT("BasePose_Description", "This information is used when retargeting assets to a different skeleton. You need to make sure the ref pose of both meshes is the same when retargeting, so you can see the pose and edit using the bone transform widget, and click the Save button below. "))
		]

		+ SVerticalBox::Slot()
		.AutoHeight()		// This is required to make the scrollbar work, as content overflows Slate containers by default
		.VAlign(VAlign_Center)
		.HAlign(HAlign_Left)
		.Padding(5, 5)
		[
			SNew(SHorizontalBox)

			+SHorizontalBox::Slot()
			.AutoWidth()
			.HAlign(HAlign_Center)
			[
				SNew(SButton)
				.OnClicked(FOnClicked::CreateSP(this, &SRetargetSources::OnModifyPose))
				.HAlign(HAlign_Center)
				.VAlign(VAlign_Center)
				.Text(LOCTEXT("ModifyRetargetBasePose_Label", "Modify Pose"))
				.ToolTipText(LOCTEXT("ModifyRetargetBasePose_Tooltip", "The Retarget Base Pose is used to retarget animation from Skeletal Meshes with varying ref poses to this Skeletal Mesh. \nPrefer fixing ref poses before importing if possible."))
			]

			+SHorizontalBox::Slot()
			.AutoWidth()
			.HAlign(HAlign_Center)
			[
				SNew(SButton)
				.OnClicked(FOnClicked::CreateSP(this, &SRetargetSources::OnViewRetargetBasePose))
				.HAlign(HAlign_Center)
				.VAlign(VAlign_Center)
				.Text(this, &SRetargetSources::GetToggleRetargetBasePose)
				.ToolTipText(LOCTEXT("ViewRetargetBasePose_Tooltip", "Toggle to View/Edit Retarget Base Pose"))
			]
		]

		+SVerticalBox::Slot()
		.Padding(5, 5)
		.AutoHeight()
		[
			SNew(SSeparator)
			.Orientation(Orient_Horizontal)
		]
		
		+ SVerticalBox::Slot()
		.Padding(5, 5)
		.AutoHeight()
		[
			SNew(STextBlock)
			.TextStyle(FAppStyle::Get(), "Persona.RetargetManager.ImportantText")
			.Text(LOCTEXT("RetargetSource_Title", "Manage Retarget Sources"))
		]
		
		+ SVerticalBox::Slot()
		.Padding(5, 5)
		.FillHeight(0.5)
		[
			// construct retarget source window
			SNew(SRetargetSourceWindow, InEditableSkeleton, InOnPostUndo)
		]

		+SVerticalBox::Slot()
		.Padding(5, 5)
		.AutoHeight()
		[
			SNew(SSeparator)
			.Orientation(Orient_Horizontal)
		]

		+ SVerticalBox::Slot()
		.Padding(5, 5)
		.AutoHeight()
		[
			SNew(STextBlock)
			.TextStyle(FAppStyle::Get(), "Persona.RetargetManager.ImportantText")
			.Text(LOCTEXT("CompatibleSkeletons_Title", "Manage Compatible Skeletons"))
		]

		+ SVerticalBox::Slot()
		.Padding(5, 5)
		.FillHeight(0.5)
		[
			SNew(SCompatibleSkeletons, InEditableSkeleton, InOnPostUndo)
		]
	];
}

FReply SRetargetSources::OnViewRetargetBasePose() const
{
	UDebugSkelMeshComponent * PreviewMeshComp = PreviewScenePtr.Pin()->GetPreviewMeshComponent();
	if (PreviewMeshComp && PreviewMeshComp->PreviewInstance)
	{
		const FScopedTransaction Transaction(LOCTEXT("ViewRetargetBasePose_Action", "Edit Retarget Base Pose"));
		PreviewMeshComp->PreviewInstance->SetForceRetargetBasePose(!PreviewMeshComp->PreviewInstance->GetForceRetargetBasePose());
		PreviewMeshComp->Modify();
		// reset all bone transform since you don't want to keep any bone transform change
		PreviewMeshComp->PreviewInstance->ResetModifiedBone();
		// add root 
		if (PreviewMeshComp->PreviewInstance->GetForceRetargetBasePose())
		{
			PreviewMeshComp->BonesOfInterest.Add(0);
		}
	}

	return FReply::Handled();
}

FReply SRetargetSources::OnModifyPose()
{
	// create context menu
	TSharedPtr< SWindow > Parent = FSlateApplication::Get().GetActiveTopLevelWindow();
	if (Parent.IsValid())
	{
		FSlateApplication::Get().PushMenu(
			Parent.ToSharedRef(),
			FWidgetPath(),
			OnModifyPoseContextMenu(),
			FSlateApplication::Get().GetCursorPos(),
			FPopupTransitionEffect(FPopupTransitionEffect::TypeInPopup));
	}

	return FReply::Handled();
}

TSharedRef<SWidget> SRetargetSources::OnModifyPoseContextMenu() 
{
	FMenuBuilder MenuBuilder(false, nullptr);

	MenuBuilder.BeginSection("ModifyPose_Label", LOCTEXT("ModifyPose", "Set Pose"));
	{
		FUIAction Action_ReferencePose
		(
			FExecuteAction::CreateSP(this, &SRetargetSources::ResetRetargetBasePose)
		);

		MenuBuilder.AddMenuEntry
		(
			LOCTEXT("ModifyPoseContextMenu_Reset", "Reset"),
			LOCTEXT("ModifyPoseContextMenu_Reset_Desc", "Reset to reference pose"),
			FSlateIcon(FAppStyle::GetAppStyleSetName(), "Profiler.EventGraph.SelectStack"), Action_ReferencePose, NAME_None, EUserInterfaceActionType::Button
		);

		FUIAction Action_UseCurrentPose
		(
			FExecuteAction::CreateSP(this, &SRetargetSources::UseCurrentPose)
		);

		MenuBuilder.AddMenuEntry
		(
			LOCTEXT("ModifyPoseContextMenu_UseCurrentPose", "Use CurrentPose"),
			LOCTEXT("ModifyPoseContextMenu_UseCurrentPose_Desc", "Use Current Pose"),
			FSlateIcon(FAppStyle::GetAppStyleSetName(), "Profiler.EventGraph.SelectStack"), Action_UseCurrentPose, NAME_None, EUserInterfaceActionType::Button
		);

		MenuBuilder.AddMenuSeparator();

		MenuBuilder.AddWidget(
			SNew(SVerticalBox)

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3)
			[
				SNew(SObjectPropertyEntryBox)
				.AllowedClass(UPoseAsset::StaticClass())
				.OnObjectChanged(this, &SRetargetSources::SetSelectedPose)
				.OnShouldFilterAsset(this, &SRetargetSources::ShouldFilterAsset)
				.ObjectPath(this, &SRetargetSources::GetSelectedPose)
			]
			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3)
			[
				SAssignNew(PoseAssetNameWidget, SPoseAssetNameWidget)
				.OnSelectionChanged(this, &SRetargetSources::SetPoseName)
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(3)
			[
				SNew(SButton)
				.OnClicked(FOnClicked::CreateSP(this, &SRetargetSources::OnImportPose))
				.IsEnabled(this, &SRetargetSources::CanImportPose)
				.HAlign(HAlign_Center)
				.VAlign(VAlign_Center)
				.Text(LOCTEXT("ImportRetargetBasePose_Label", "Import"))
				.ToolTipText(LOCTEXT("ImportRetargetBasePose_Tooltip", "Import the selected pose to Retarget Base Pose"))
			]
			,
			FText()
		);

		if (SelectedPoseAsset.IsValid())
		{
			PoseAssetNameWidget->SetPoseAsset(SelectedPoseAsset.Get());
		}
		// import pose 
		MenuBuilder.EndSection();
	}

	return MenuBuilder.MakeWidget();
}

bool SRetargetSources::CanImportPose() const
{
	return (SelectedPoseAsset.IsValid() && SelectedPoseAsset.Get()->ContainsPose(FName(*SelectedPoseName)));
}

void SRetargetSources::SetSelectedPose(const FAssetData& InAssetData)
{
	if (PoseAssetNameWidget.IsValid())
	{
		SelectedPoseAsset = Cast<UPoseAsset>(InAssetData.GetAsset());
		if (SelectedPoseAsset.IsValid())
		{
			PoseAssetNameWidget->SetPoseAsset(SelectedPoseAsset.Get());
		}
	}
}

FString SRetargetSources::GetSelectedPose() const
{
	return SelectedPoseAsset->GetPathName();
}

bool SRetargetSources::ShouldFilterAsset(const FAssetData& InAssetData)
{
	if (InAssetData.GetClass() == UPoseAsset::StaticClass() &&
		EditableSkeletonPtr.IsValid())
	{
		FString SkeletonString = FAssetData(&EditableSkeletonPtr.Pin()->GetSkeleton()).GetExportTextName();
		FAssetDataTagMapSharedView::FFindTagResult Result = InAssetData.TagsAndValues.FindTag("Skeleton");
		return (!Result.IsSet() || SkeletonString != Result.GetValue());
	}

	return false;
}

void SRetargetSources::ResetRetargetBasePose()
{
	UDebugSkelMeshComponent * PreviewMeshComp = PreviewScenePtr.Pin()->GetPreviewMeshComponent();
	if(PreviewMeshComp && PreviewMeshComp->GetSkeletalMeshAsset())
	{
		USkeletalMesh * PreviewMesh = PreviewMeshComp->GetSkeletalMeshAsset();

		check(PreviewMesh && &EditableSkeletonPtr.Pin()->GetSkeleton() == PreviewMesh->GetSkeleton());

		if(PreviewMesh)
		{
			const FScopedTransaction Transaction(LOCTEXT("ResetRetargetBasePose_Action", "Reset Retarget Base Pose"));
			PreviewMesh->Modify();
			// reset to original ref pose
			PreviewMesh->SetRetargetBasePose(PreviewMesh->GetRefSkeleton().GetRefBonePose());
			TurnOnPreviewRetargetBasePose();
		}
	}

	FSlateApplication::Get().DismissAllMenus();
}

void SRetargetSources::UseCurrentPose()
{
	UDebugSkelMeshComponent * PreviewMeshComp = PreviewScenePtr.Pin()->GetPreviewMeshComponent();
	if (PreviewMeshComp && PreviewMeshComp->GetSkeletalMeshAsset())
	{
		USkeletalMesh * PreviewMesh = PreviewMeshComp->GetSkeletalMeshAsset();

		check(PreviewMesh && &EditableSkeletonPtr.Pin()->GetSkeleton() == PreviewMesh->GetSkeleton());

		if (PreviewMesh)
		{
			const FScopedTransaction Transaction(LOCTEXT("RetargetBasePose_UseCurrentPose_Action", "Retarget Base Pose : Use Current Pose"));
			PreviewMesh->Modify();
			// get space bases and calculate local
			const TArray<FTransform> & SpaceBases = PreviewMeshComp->GetComponentSpaceTransforms();
			// @todo check to see if skeleton vs preview mesh makes it different for missing bones
			const FReferenceSkeleton& RefSkeleton = PreviewMesh->GetRefSkeleton();
			TArray<FTransform> & NewRetargetBasePose = PreviewMesh->GetRetargetBasePose();
			// if you're using leader pose component in preview, this won't work
			check(PreviewMesh->GetRefSkeleton().GetNum() == SpaceBases.Num());
			int32 TotalNumBones = PreviewMesh->GetRefSkeleton().GetNum();
			NewRetargetBasePose.Empty(TotalNumBones);
			NewRetargetBasePose.AddUninitialized(TotalNumBones);

			for (int32 BoneIndex = 0; BoneIndex < TotalNumBones; ++BoneIndex)
			{
				// this is slower, but skeleton can have more bones, so I can't just access
				// Parent index from Skeleton. Going safer route
				FName BoneName = PreviewMeshComp->GetBoneName(BoneIndex);
				FName ParentBoneName = PreviewMeshComp->GetParentBone(BoneName);
				int32 ParentIndex = RefSkeleton.FindBoneIndex(ParentBoneName);

				if (ParentIndex != INDEX_NONE)
				{
					NewRetargetBasePose[BoneIndex] = SpaceBases[BoneIndex].GetRelativeTransform(SpaceBases[ParentIndex]);
				}
				else
				{
					NewRetargetBasePose[BoneIndex] = SpaceBases[BoneIndex];
				}
			}

			// Clear PreviewMeshComp bone modified, they're baked now
			PreviewMeshComp->PreviewInstance->ResetModifiedBone();
			TurnOnPreviewRetargetBasePose();
		}
	}
	FSlateApplication::Get().DismissAllMenus();
}

void SRetargetSources::SetPoseName(TSharedPtr<FString> PoseName, ESelectInfo::Type SelectionType)
{
	SelectedPoseName = *PoseName.Get();
}

FReply SRetargetSources::OnImportPose()
{
	if (CanImportPose())
	{
		UPoseAsset* RawPoseAsset = SelectedPoseAsset.Get();
		ImportPose(RawPoseAsset, FName(*SelectedPoseName));
	}

	FSlateApplication::Get().DismissAllMenus();

	return FReply::Handled();
}

void SRetargetSources::ImportPose(const UPoseAsset* PoseAsset, const FName& PoseName)
{
	// Get transforms from pose (this also converts from additive if necessary)
	const int32 PoseIndex = PoseAsset->GetPoseIndexByName(PoseName);
	if (PoseIndex != INDEX_NONE)
	{
		TArray<FTransform> PoseTransforms;
		if (PoseAsset->GetFullPose(PoseIndex, PoseTransforms))
		{
			const TArray<FName>	PoseTrackNames = PoseAsset->GetTrackNames();

			ensureAlways(PoseTrackNames.Num() == PoseTransforms.Num());

			// now I have pose, I have to copy to the retarget base pose
			UDebugSkelMeshComponent * PreviewMeshComp = PreviewScenePtr.Pin()->GetPreviewMeshComponent();
			if (PreviewMeshComp && PreviewMeshComp->GetSkeletalMeshAsset())
			{
				USkeletalMesh * PreviewMesh = PreviewMeshComp->GetSkeletalMeshAsset();

				check(PreviewMesh && &EditableSkeletonPtr.Pin()->GetSkeleton() == PreviewMesh->GetSkeleton());

				if (PreviewMesh)
				{
					// Check if we have bones for all the tracks. If not, then fail so that the user doesn't end up
					// with partial or broken retarget setup.
					for (int32 TrackIndex = 0; TrackIndex < PoseTrackNames.Num(); ++TrackIndex)
					{
						const int32 BoneIndex = PreviewMesh->GetRefSkeleton().FindBoneIndex(PoseTrackNames[TrackIndex]);
						if (BoneIndex == INDEX_NONE)
						{
							FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(TEXT("Pose asset does not match the preview mesh skeleton. Aborting.")));
							return;
						}
					}
					
					const FScopedTransaction Transaction(LOCTEXT("ImportRetargetBasePose_Action", "Import Retarget Base Pose"));
					PreviewMesh->Modify();

					// reset to original ref pose first
					PreviewMesh->SetRetargetBasePose(PreviewMesh->GetRefSkeleton().GetRefBonePose());

					// now override imported pose
					for (int32 TrackIndex = 0; TrackIndex < PoseTrackNames.Num(); ++TrackIndex)
					{
						const int32 BoneIndex = PreviewMesh->GetRefSkeleton().FindBoneIndex(PoseTrackNames[TrackIndex]);
						PreviewMesh->GetRetargetBasePose()[BoneIndex] = PoseTransforms[TrackIndex];
					}

					TurnOnPreviewRetargetBasePose();
				}
			}
		}
	}
}

void SRetargetSources::PostUndo()
{
}

FText SRetargetSources::GetToggleRetargetBasePose() const
{
	UDebugSkelMeshComponent * PreviewMeshComp = PreviewScenePtr.Pin()->GetPreviewMeshComponent();
	if(PreviewMeshComp && PreviewMeshComp->PreviewInstance)
	{
		if (PreviewMeshComp->PreviewInstance->GetForceRetargetBasePose())
		{
			return LOCTEXT("HideRetargetBasePose_Label", "Hide Pose");
		}
		else
		{
			return LOCTEXT("ViewRetargetBasePose_Label", "View Pose");
		}
	}

	return LOCTEXT("InvalidRetargetBasePose_Label", "No Mesh for Base Pose");
}

void SRetargetSources::TurnOnPreviewRetargetBasePose()
{
	UDebugSkelMeshComponent * PreviewMeshComp = PreviewScenePtr.Pin()->GetPreviewMeshComponent();
	if (PreviewMeshComp && PreviewMeshComp->PreviewInstance)
	{
		PreviewMeshComp->PreviewInstance->SetForceRetargetBasePose(true);
	}
}

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
// SRigWindow

void SRigWindow::Construct(const FArguments& InArgs, const TSharedRef<class IEditableSkeleton>& InEditableSkeleton, const TSharedRef<class IPersonaPreviewScene>& InPreviewScene, FSimpleMulticastDelegate& InOnPostUndo)
{
	EditableSkeletonPtr = InEditableSkeleton;
	PreviewScenePtr = InPreviewScene;
	bDisplayAdvanced = false;

	InEditableSkeleton->RefreshRigConfig();

	ChildSlot
		[
			SNew(SVerticalBox)

			// first add rig asset picker
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(2, 2)
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("RigNameLabel", "Select Rig "))
		.Font(FAppStyle::GetFontStyle("Persona.RetargetManager.BoldFont"))
		]

	+ SHorizontalBox::Slot()
		[
			SAssignNew(AssetComboButton, SComboButton)
			//.ToolTipText( this, &SPropertyEditorAsset::OnGetToolTip )
		.ButtonStyle(FAppStyle::Get(), "PropertyEditor.AssetComboStyle")
		.ForegroundColor(FAppStyle::GetColor("PropertyEditor.AssetName.ColorAndOpacity"))
		.OnGetMenuContent(this, &SRigWindow::MakeRigPickerWithMenu)
		.ContentPadding(2.0f)
		.ButtonContent()
		[
			// Show the name of the asset or actor
			SNew(STextBlock)
			.TextStyle(FAppStyle::Get(), "PropertyEditor.AssetClass")
		.Font(FAppStyle::GetFontStyle("PropertyWindow.NormalFont"))
		.Text(this, &SRigWindow::GetAssetName)
		]
		]
		]

	+ SVerticalBox::Slot()
		.AutoHeight()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Padding(2, 5)
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
		.HAlign(HAlign_Center)
		.Padding(2, 0)
		.AutoWidth()
		[
			SNew(SButton)
			.OnClicked(FOnClicked::CreateSP(this, &SRigWindow::OnAutoMapping))
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Text(LOCTEXT("AutoMapping_Title", "AutoMap"))
		.ToolTipText(LOCTEXT("AutoMapping_Tooltip", "Automatically map the best matching bones"))
		]

	+ SHorizontalBox::Slot()
		.HAlign(HAlign_Right)
		.Padding(2, 0)
		.AutoWidth()
		[
			SNew(SButton)
			.OnClicked(FOnClicked::CreateSP(this, &SRigWindow::OnClearMapping))
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Text(LOCTEXT("ClearMapping_Title", "Clear"))
		.ToolTipText(LOCTEXT("ClearMapping_Tooltip", "Clear currently mapping bones"))
		]

	+ SHorizontalBox::Slot()
		.HAlign(HAlign_Center)
		.Padding(2, 0)
		.AutoWidth()
		[
			SNew(SButton)
			.OnClicked(FOnClicked::CreateSP(this, &SRigWindow::OnSaveMapping))
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Text(LOCTEXT("SaveMapping_Title", "Save"))
		.ToolTipText(LOCTEXT("SaveMapping_Tooltip", "Save currently mapping bones"))
		]

	+ SHorizontalBox::Slot()
		.HAlign(HAlign_Center)
		.Padding(2, 0)
		.AutoWidth()
		[
			SNew(SButton)
			.OnClicked(FOnClicked::CreateSP(this, &SRigWindow::OnLoadMapping))
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Text(LOCTEXT("LoadMapping_Title", "Load"))
		.ToolTipText(LOCTEXT("LoadMapping_Tooltip", "Load mapping from saved asset."))
		]

	+ SHorizontalBox::Slot()
		.HAlign(HAlign_Center)
		.Padding(2, 0)
		.AutoWidth()
		[
			SNew(SButton)
			.OnClicked(FOnClicked::CreateSP(this, &SRigWindow::OnToggleAdvanced))
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Text(this, &SRigWindow::GetAdvancedButtonText)
		.ToolTipText(LOCTEXT("ToggleAdvanced_Tooltip", "Toggle Base/Advanced configuration"))
		]
		]

	// now show bone mapping
	+ SVerticalBox::Slot()
		.FillHeight(1)
		.Padding(0, 2)
		[
			SAssignNew(BoneMappingWidget, SBoneMappingBase, InOnPostUndo)
			.OnBoneMappingChanged(this, &SRigWindow::OnBoneMappingChanged)
		.OnGetBoneMapping(this, &SRigWindow::GetBoneMapping)
		.OnCreateBoneMapping(this, &SRigWindow::CreateBoneMappingList)
		.OnGetReferenceSkeleton(this, &SRigWindow::GetReferenceSkeleton)
		]
		];
}

void SRigWindow::CreateBoneMappingList(const FString& SearchText, TArray< TSharedPtr<FDisplayedBoneMappingInfo> >& BoneMappingList)
{
	BoneMappingList.Empty();

	const USkeleton& Skeleton = EditableSkeletonPtr.Pin()->GetSkeleton();
	const URig* Rig = Skeleton.GetRig();

	if (Rig)
	{
		bool bDoFiltering = !SearchText.IsEmpty();
		const TArray<FNode>& Nodes = Rig->GetNodes();

		for (const auto& Node : Nodes)
		{
			const FName& Name = Node.Name;
			const FString& DisplayName = Node.DisplayName;
			const FName& BoneName = Skeleton.GetRigBoneMapping(Name);

			if (Node.bAdvanced == bDisplayAdvanced)
			{
				if (bDoFiltering)
				{
					// make sure it doens't fit any of them
					if (!Name.ToString().Contains(SearchText) && !DisplayName.Contains(SearchText) && !BoneName.ToString().Contains(SearchText))
					{
						continue; // Skip items that don't match our filter
					}
				}

				TSharedRef<FDisplayedBoneMappingInfo> Info = FDisplayedBoneMappingInfo::Make(Name, DisplayName);

				BoneMappingList.Add(Info);
			}
		}
	}
}


void SRigWindow::OnAssetSelected(UObject* Object)
{
	AssetComboButton->SetIsOpen(false);

	EditableSkeletonPtr.Pin()->SetRigConfig(Cast<URig>(Object));

	BoneMappingWidget.Get()->RefreshBoneMappingList();

	FAssetNotifications::SkeletonNeedsToBeSaved(&EditableSkeletonPtr.Pin()->GetSkeleton());
}

/** Returns true if the asset shouldn't show  */
bool SRigWindow::ShouldFilterAsset(const struct FAssetData& AssetData)
{
	return (AssetData.GetAsset() == GetRigObject());
}

URig* SRigWindow::GetRigObject() const
{
	const USkeleton& Skeleton = EditableSkeletonPtr.Pin()->GetSkeleton();
	return Skeleton.GetRig();
}

void SRigWindow::OnBoneMappingChanged(FName NodeName, FName BoneName)
{
	EditableSkeletonPtr.Pin()->SetRigBoneMapping(NodeName, BoneName);
}

FName SRigWindow::GetBoneMapping(FName NodeName)
{
	const USkeleton& Skeleton = EditableSkeletonPtr.Pin()->GetSkeleton();
	return Skeleton.GetRigBoneMapping(NodeName);
}

FReply SRigWindow::OnToggleAdvanced()
{
	bDisplayAdvanced = !bDisplayAdvanced;

	BoneMappingWidget.Get()->RefreshBoneMappingList();

	return FReply::Handled();
}

FText SRigWindow::GetAdvancedButtonText() const
{
	if (bDisplayAdvanced)
	{
		return LOCTEXT("ShowBase", "Show Base");
	}

	return LOCTEXT("ShowAdvanced", "Show Advanced");
}

TSharedRef<SWidget> SRigWindow::MakeRigPickerWithMenu()
{
	const USkeleton& Skeleton = EditableSkeletonPtr.Pin()->GetSkeleton();

	// rig asset picker
	return
		SNew(SRigPicker)
		.InitialObject(Skeleton.GetRig())
		.OnShouldFilterAsset(this, &SRigWindow::ShouldFilterAsset)
		.OnSetReference(this, &SRigWindow::OnAssetSelected)
		.OnClose(this, &SRigWindow::CloseComboButton);
}

void SRigWindow::CloseComboButton()
{
	AssetComboButton->SetIsOpen(false);
}

FText SRigWindow::GetAssetName() const
{
	URig* Rig = GetRigObject();
	if (Rig)
	{
		return FText::FromString(Rig->GetName());
	}

	return LOCTEXT("None", "None");
}

const struct FReferenceSkeleton& SRigWindow::GetReferenceSkeleton() const
{
	// have to change this to preview mesh because that's what the retarget base pose will be
	UDebugSkelMeshComponent* PreviewMeshComp = PreviewScenePtr.Pin()->GetPreviewMeshComponent();
	USkeletalMesh* PreviewMesh = (PreviewMeshComp) ? ToRawPtr(PreviewMeshComp->GetSkeletalMeshAsset()) : nullptr;
	// it's because retarget base pose leaves in mesh, so if you give ref skeleton of skeleton, you might have joint that your mesh doesn't have
	return (PreviewMesh) ? PreviewMesh->GetRefSkeleton() : EditableSkeletonPtr.Pin()->GetSkeleton().GetReferenceSkeleton();
}

bool SRigWindow::OnTargetSkeletonSelected(USkeleton* SelectedSkeleton, URig* Rig) const
{
	if (SelectedSkeleton)
	{
		// make sure the skeleton contains all the rig node names
		const FReferenceSkeleton& RefSkeleton = SelectedSkeleton->GetReferenceSkeleton();

		if (RefSkeleton.GetNum() > 0)
		{
			const TArray<FNode> RigNodes = Rig->GetNodes();
			int32 BoneMatched = 0;

			for (const auto& RigNode : RigNodes)
			{
				if (RefSkeleton.FindBoneIndex(RigNode.Name) != INDEX_NONE)
				{
					++BoneMatched;
				}
			}

			float BoneMatchedPercentage = (float)(BoneMatched) / RefSkeleton.GetNum();
			if (BoneMatchedPercentage > 0.5f)
			{
				Rig->SetSourceReferenceSkeleton(RefSkeleton);

				return true;
			}
		}
	}

	return false;
}

bool SRigWindow::SelectSourceReferenceSkeleton(URig* Rig) const
{
	TSharedRef<SWindow> WidgetWindow = SNew(SWindow)
		.Title(LOCTEXT("SelectSourceSkeletonForRig", "Select Source Skeleton for the Rig"))
		.ClientSize(FVector2D(500, 600));

	TSharedRef<SSkeletonSelectorWindow> SkeletonSelectorWindow = SNew(SSkeletonSelectorWindow).WidgetWindow(WidgetWindow);

	WidgetWindow->SetContent(SkeletonSelectorWindow);

	GEditor->EditorAddModalWindow(WidgetWindow);
	USkeleton* RigSkeleton = SkeletonSelectorWindow->GetSelectedSkeleton();
	if (RigSkeleton)
	{
		return OnTargetSkeletonSelected(RigSkeleton, Rig);
	}

	return false;
}


FReply SRigWindow::OnAutoMapping()
{
	URig* Rig = GetRigObject();
	if (Rig)
	{
		if (!Rig->IsSourceReferenceSkeletonAvailable())
		{
			//ask if they want to set up source skeleton
			EAppReturnType::Type Response = FMessageDialog::Open(EAppMsgType::YesNo, LOCTEXT("TheRigNeedsSkeleton", "In order to attempt to auto-map bones, the rig should have the source skeleton. However, the current rig is missing the source skeleton. Would you like to choose one? It's best to select the skeleton this rig is from."));

			if (Response == EAppReturnType::No)
			{
				return FReply::Handled();
			}

			if (!SelectSourceReferenceSkeleton(Rig))
			{
				return FReply::Handled();
			}
		}

		FReferenceSkeleton RigReferenceSkeleton = Rig->GetSourceReferenceSkeleton();
		const USkeleton& Skeleton = EditableSkeletonPtr.Pin()->GetSkeleton();
		FBoneMappingHelper Helper(RigReferenceSkeleton, Skeleton.GetReferenceSkeleton());
		TMap<FName, FName> BestMatches;
		Helper.TryMatch(BestMatches);

		EditableSkeletonPtr.Pin()->SetRigBoneMappings(BestMatches);
		// refresh the list
		BoneMappingWidget->RefreshBoneMappingList();
	}

	return FReply::Handled();
}

FReply SRigWindow::OnClearMapping()
{
	URig* Rig = GetRigObject();
	if (Rig)
	{
		const TArray<FNode>& Nodes = Rig->GetNodes();
		TMap<FName, FName> Mappings;
		for (const auto& Node : Nodes)
		{
			Mappings.Add(Node.Name, NAME_None);
		}

		EditableSkeletonPtr.Pin()->SetRigBoneMappings(Mappings);

		// refresh the list
		BoneMappingWidget->RefreshBoneMappingList();
	}
	return FReply::Handled();
}

// save mapping function
FReply SRigWindow::OnSaveMapping()
{
	URig* Rig = GetRigObject();
	if (Rig)
	{
		const USkeleton& Skeleton = EditableSkeletonPtr.Pin()->GetSkeleton();
		const FString DefaultPackageName = Skeleton.GetPathName();
		const FString DefaultPath = FPackageName::GetLongPackagePath(DefaultPackageName);
		const FString DefaultName = TEXT("BoneMapping");

		// Initialize SaveAssetDialog config
		FSaveAssetDialogConfig SaveAssetDialogConfig;
		SaveAssetDialogConfig.DialogTitleOverride = LOCTEXT("SaveMappingToAsset", "Save Mapping");
		SaveAssetDialogConfig.DefaultPath = DefaultPath;
		SaveAssetDialogConfig.DefaultAssetName = DefaultName;
		SaveAssetDialogConfig.ExistingAssetPolicy = ESaveAssetDialogExistingAssetPolicy::AllowButWarn;
		SaveAssetDialogConfig.AssetClassNames.Add(UNodeMappingContainer::StaticClass()->GetClassPathName());

		FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
		FString SaveObjectPath = ContentBrowserModule.Get().CreateModalSaveAssetDialog(SaveAssetDialogConfig);
		if (!SaveObjectPath.IsEmpty())
		{
			const FString SavePackageName = FPackageName::ObjectPathToPackageName(SaveObjectPath);
			const FString SavePackagePath = FPaths::GetPath(SavePackageName);
			const FString SaveAssetName = FPaths::GetBaseFilename(SavePackageName);

			// create package and create object
			UPackage* Package = CreatePackage(*SavePackageName);
			UNodeMappingContainer* MapperClass = NewObject<UNodeMappingContainer>(Package, *SaveAssetName, RF_Public | RF_Standalone);
			USkeletalMeshComponent* PreviewMeshComp = PreviewScenePtr.Pin()->GetPreviewMeshComponent();
			USkeletalMesh* PreviewMesh = PreviewMeshComp->GetSkeletalMeshAsset();
			if (MapperClass && PreviewMesh)
			{
				// update mapping information on the class
				MapperClass->SetSourceAsset(Rig);
				MapperClass->SetTargetAsset(PreviewMesh);

				const TArray<FNode>& Nodes = Rig->GetNodes();
				for (const auto& Node : Nodes)
				{
					FName MappingName = Skeleton.GetRigBoneMapping(Node.Name);
					if (Node.Name != NAME_None && MappingName != NAME_None)
					{
						MapperClass->AddMapping(Node.Name, MappingName);
					}
				}

				// save mapper class
				FString const PackageName = Package->GetName();
				FString const PackageFileName = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());
				FSavePackageArgs SaveArgs;
				SaveArgs.TopLevelFlags = RF_Standalone;
				SaveArgs.Error = GError;
				SaveArgs.SaveFlags = SAVE_NoError;
				UPackage::SavePackage(Package, nullptr, *PackageFileName, SaveArgs);
				//UPackage::SavePackage(Package, NULL, RF_Standalone, *PackageFileName, GError, nullptr, false, true, SAVE_NoError);
			}
		}
	}
	return FReply::Handled();
}

FReply SRigWindow::OnLoadMapping()
{
	// show list of skeletalmeshes that they can choose from
	FContentBrowserModule& ContentBrowserModule = FModuleManager::Get().LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));

	FAssetPickerConfig AssetPickerConfig;
	AssetPickerConfig.Filter.ClassPaths.Add(UNodeMappingContainer::StaticClass()->GetClassPathName());
	AssetPickerConfig.OnAssetSelected = FOnAssetSelected::CreateSP(this, &SRigWindow::SetSelectedMappingAsset);
	AssetPickerConfig.bAllowNullSelection = false;
	AssetPickerConfig.InitialAssetViewType = EAssetViewType::Tile;

	TSharedRef<SWidget> Widget = SNew(SBox)
		.WidthOverride(384)
		.HeightOverride(768)
		[
			SNew(SBorder)
			.BorderBackgroundColor(FLinearColor(0.25f, 0.25f, 0.25f, 1.f))
		.Padding(2)
		[
			SNew(SBorder)
			.BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
		.Padding(8)
		[
			ContentBrowserModule.Get().CreateAssetPicker(AssetPickerConfig)
		]
		]
		];

	FSlateApplication::Get().PushMenu(
		AsShared(),
		FWidgetPath(),
		Widget,
		FSlateApplication::Get().GetCursorPos(),
		FPopupTransitionEffect(FPopupTransitionEffect::TopMenu)
	);

	return FReply::Handled();
}

FReply SRigWindow::OnToggleView()
{
	return FReply::Handled();
}

void SRigWindow::SetSelectedMappingAsset(const FAssetData& InAssetData)
{
	UNodeMappingContainer* Container = Cast<UNodeMappingContainer>(InAssetData.GetAsset());
	if (Container)
	{
		const TMap<FName, FName> SourceToTarget = Container->GetNodeMappingTable();
		EditableSkeletonPtr.Pin()->SetRigBoneMappings(SourceToTarget);
	}

	FSlateApplication::Get().DismissAllMenus();
}

#undef LOCTEXT_NAMESPACE
