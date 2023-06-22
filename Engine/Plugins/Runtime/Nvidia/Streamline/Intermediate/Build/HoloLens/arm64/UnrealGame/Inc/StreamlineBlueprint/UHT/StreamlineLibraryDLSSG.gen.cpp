// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamlineBlueprint/Public/StreamlineLibraryDLSSG.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamlineLibraryDLSSG() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STREAMLINEBLUEPRINT_API UClass* Z_Construct_UClass_UStreamlineLibraryDLSSG();
	STREAMLINEBLUEPRINT_API UClass* Z_Construct_UClass_UStreamlineLibraryDLSSG_NoRegister();
	STREAMLINEBLUEPRINT_API UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode();
	STREAMLINEBLUEPRINT_API UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport();
	UPackage* Z_Construct_UPackage__Script_StreamlineBlueprint();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_UStreamlineDLSSGSupport;
	static UEnum* UStreamlineDLSSGSupport_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_UStreamlineDLSSGSupport.OuterSingleton)
		{
			Z_Registration_Info_UEnum_UStreamlineDLSSGSupport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport, Z_Construct_UPackage__Script_StreamlineBlueprint(), TEXT("UStreamlineDLSSGSupport"));
		}
		return Z_Registration_Info_UEnum_UStreamlineDLSSGSupport.OuterSingleton;
	}
	template<> STREAMLINEBLUEPRINT_API UEnum* StaticEnum<UStreamlineDLSSGSupport>()
	{
		return UStreamlineDLSSGSupport_StaticEnum();
	}
	struct Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport_Statics::Enumerators[] = {
		{ "UStreamlineDLSSGSupport::Supported", (int64)UStreamlineDLSSGSupport::Supported },
		{ "UStreamlineDLSSGSupport::NotSupported", (int64)UStreamlineDLSSGSupport::NotSupported },
		{ "UStreamlineDLSSGSupport::NotSupportedIncompatibleHardware", (int64)UStreamlineDLSSGSupport::NotSupportedIncompatibleHardware },
		{ "UStreamlineDLSSGSupport::NotSupportedDriverOutOfDate", (int64)UStreamlineDLSSGSupport::NotSupportedDriverOutOfDate },
		{ "UStreamlineDLSSGSupport::NotSupportedOperatingSystemOutOfDate", (int64)UStreamlineDLSSGSupport::NotSupportedOperatingSystemOutOfDate },
		{ "UStreamlineDLSSGSupport::NotSupportedByPlatformAtBuildTime", (int64)UStreamlineDLSSGSupport::NotSupportedByPlatformAtBuildTime },
		{ "UStreamlineDLSSGSupport::NotSupportedIncompatibleAPICaptureToolActive", (int64)UStreamlineDLSSGSupport::NotSupportedIncompatibleAPICaptureToolActive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
		{ "NotSupported.DisplayName", "Not Supported" },
		{ "NotSupported.Name", "UStreamlineDLSSGSupport::NotSupported" },
		{ "NotSupportedByPlatformAtBuildTime.DisplayName", "Platform Not Supported At Build Time" },
		{ "NotSupportedByPlatformAtBuildTime.Name", "UStreamlineDLSSGSupport::NotSupportedByPlatformAtBuildTime" },
		{ "NotSupportedByPlatformAtBuildTime.ToolTip", "This platform doesn't not support DLSS-G at build time. Currently DLSS-G is only supported on Windows 64" },
		{ "NotSupportedDriverOutOfDate.DisplayName", "Driver Out of Date" },
		{ "NotSupportedDriverOutOfDate.Name", "UStreamlineDLSSGSupport::NotSupportedDriverOutOfDate" },
		{ "NotSupportedDriverOutOfDate.ToolTip", "The driver is outdated. Also see GetDLSSGMinimumDriverVersion" },
		{ "NotSupportedIncompatibleAPICaptureToolActive.DisplayName", "Incompatible API Capture Tool Active" },
		{ "NotSupportedIncompatibleAPICaptureToolActive.Name", "UStreamlineDLSSGSupport::NotSupportedIncompatibleAPICaptureToolActive" },
		{ "NotSupportedIncompatibleAPICaptureToolActive.ToolTip", "DLSS-G is not compatible with an active API capture tool such as RenderDoc." },
		{ "NotSupportedIncompatibleHardware.DisplayName", "Incompatible Hardware" },
		{ "NotSupportedIncompatibleHardware.Name", "UStreamlineDLSSGSupport::NotSupportedIncompatibleHardware" },
		{ "NotSupportedIncompatibleHardware.ToolTip", "DLSS-G requires an NVIDIA RTX GPU" },
		{ "NotSupportedOperatingSystemOutOfDate.DisplayName", "Operating System Out of Date" },
		{ "NotSupportedOperatingSystemOutOfDate.Name", "UStreamlineDLSSGSupport::NotSupportedOperatingSystemOutOfDate" },
		{ "NotSupportedOperatingSystemOutOfDate.ToolTip", "DLSS requires at least Windows 10 Fall 2017 Creators Update 64-bit, (v1709, build 16299)" },
		{ "Supported.DisplayName", "Supported" },
		{ "Supported.Name", "UStreamlineDLSSGSupport::Supported" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
		nullptr,
		"UStreamlineDLSSGSupport",
		"UStreamlineDLSSGSupport",
		Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport()
	{
		if (!Z_Registration_Info_UEnum_UStreamlineDLSSGSupport.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UStreamlineDLSSGSupport.InnerSingleton, Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_UStreamlineDLSSGSupport.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_UStreamlineDLSSGMode;
	static UEnum* UStreamlineDLSSGMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_UStreamlineDLSSGMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_UStreamlineDLSSGMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode, Z_Construct_UPackage__Script_StreamlineBlueprint(), TEXT("UStreamlineDLSSGMode"));
		}
		return Z_Registration_Info_UEnum_UStreamlineDLSSGMode.OuterSingleton;
	}
	template<> STREAMLINEBLUEPRINT_API UEnum* StaticEnum<UStreamlineDLSSGMode>()
	{
		return UStreamlineDLSSGMode_StaticEnum();
	}
	struct Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode_Statics::Enumerators[] = {
		{ "UStreamlineDLSSGMode::Off", (int64)UStreamlineDLSSGMode::Off },
		{ "UStreamlineDLSSGMode::On", (int64)UStreamlineDLSSGMode::On },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "UStreamlineDLSSGMode::Off" },
		{ "On.DisplayName", "On" },
		{ "On.Name", "UStreamlineDLSSGMode::On" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
		nullptr,
		"UStreamlineDLSSGMode",
		"UStreamlineDLSSGMode",
		Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode()
	{
		if (!Z_Registration_Info_UEnum_UStreamlineDLSSGMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UStreamlineDLSSGMode.InnerSingleton, Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_UStreamlineDLSSGMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execGetDLSSGFrameTiming)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FrameRateInHertz);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FramesPresented);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStreamlineLibraryDLSSG::GetDLSSGFrameTiming(Z_Param_Out_FrameRateInHertz,Z_Param_Out_FramesPresented);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execGetDefaultDLSSGMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStreamlineDLSSGMode*)Z_Param__Result=UStreamlineLibraryDLSSG::GetDefaultDLSSGMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execGetDLSSGMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStreamlineDLSSGMode*)Z_Param__Result=UStreamlineLibraryDLSSG::GetDLSSGMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execSetDLSSGMode)
	{
		P_GET_ENUM(UStreamlineDLSSGMode,Z_Param_DLSSGMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStreamlineLibraryDLSSG::SetDLSSGMode(UStreamlineDLSSGMode(Z_Param_DLSSGMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execGetSupportedDLSSGModes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UStreamlineDLSSGMode>*)Z_Param__Result=UStreamlineLibraryDLSSG::GetSupportedDLSSGModes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execIsDLSSGModeSupported)
	{
		P_GET_ENUM(UStreamlineDLSSGMode,Z_Param_DLSSGMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStreamlineLibraryDLSSG::IsDLSSGModeSupported(UStreamlineDLSSGMode(Z_Param_DLSSGMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execGetDLSSGMinimumDriverVersion)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinDriverVersionMajor);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinDriverVersionMinor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStreamlineLibraryDLSSG::GetDLSSGMinimumDriverVersion(Z_Param_Out_MinDriverVersionMajor,Z_Param_Out_MinDriverVersionMinor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execQueryDLSSGSupport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStreamlineDLSSGSupport*)Z_Param__Result=UStreamlineLibraryDLSSG::QueryDLSSGSupport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execIsDLSSGSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStreamlineLibraryDLSSG::IsDLSSGSupported();
		P_NATIVE_END;
	}
	void UStreamlineLibraryDLSSG::StaticRegisterNativesUStreamlineLibraryDLSSG()
	{
		UClass* Class = UStreamlineLibraryDLSSG::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultDLSSGMode", &UStreamlineLibraryDLSSG::execGetDefaultDLSSGMode },
			{ "GetDLSSGFrameTiming", &UStreamlineLibraryDLSSG::execGetDLSSGFrameTiming },
			{ "GetDLSSGMinimumDriverVersion", &UStreamlineLibraryDLSSG::execGetDLSSGMinimumDriverVersion },
			{ "GetDLSSGMode", &UStreamlineLibraryDLSSG::execGetDLSSGMode },
			{ "GetSupportedDLSSGModes", &UStreamlineLibraryDLSSG::execGetSupportedDLSSGModes },
			{ "IsDLSSGModeSupported", &UStreamlineLibraryDLSSG::execIsDLSSGModeSupported },
			{ "IsDLSSGSupported", &UStreamlineLibraryDLSSG::execIsDLSSGSupported },
			{ "QueryDLSSGSupport", &UStreamlineLibraryDLSSG::execQueryDLSSGSupport },
			{ "SetDLSSGMode", &UStreamlineLibraryDLSSG::execSetDLSSGMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics
	{
		struct StreamlineLibraryDLSSG_eventGetDefaultDLSSGMode_Parms
		{
			UStreamlineDLSSGMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventGetDefaultDLSSGMode_Parms, ReturnValue), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode, METADATA_PARAMS(nullptr, 0) }; // 63226576
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "DLSS-G (Streamline)" },
		{ "Comment", "/* Find a reasonable default DLSS-G mode based on current hardware */" },
		{ "DisplayName", "Get Default DLSS-G Mode" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
		{ "ToolTip", "Find a reasonable default DLSS-G mode based on current hardware" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "GetDefaultDLSSGMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::StreamlineLibraryDLSSG_eventGetDefaultDLSSGMode_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics
	{
		struct StreamlineLibraryDLSSG_eventGetDLSSGFrameTiming_Parms
		{
			float FrameRateInHertz;
			int32 FramesPresented;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRateInHertz;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FramesPresented;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::NewProp_FrameRateInHertz = { "FrameRateInHertz", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventGetDLSSGFrameTiming_Parms, FrameRateInHertz), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::NewProp_FramesPresented = { "FramesPresented", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventGetDLSSGFrameTiming_Parms, FramesPresented), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::NewProp_FrameRateInHertz,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::NewProp_FramesPresented,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "DLSS-G (Streamline)" },
		{ "Comment", "/* Returns the actual framerate and number of frames presented, whether DLSS-G is active or not */" },
		{ "DisplayName", "Get DLSS-G frame frame rate and presented frames" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
		{ "ToolTip", "Returns the actual framerate and number of frames presented, whether DLSS-G is active or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "GetDLSSGFrameTiming", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::StreamlineLibraryDLSSG_eventGetDLSSGFrameTiming_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics
	{
		struct StreamlineLibraryDLSSG_eventGetDLSSGMinimumDriverVersion_Parms
		{
			int32 MinDriverVersionMajor;
			int32 MinDriverVersionMinor;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinDriverVersionMajor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinDriverVersionMinor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::NewProp_MinDriverVersionMajor = { "MinDriverVersionMajor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventGetDLSSGMinimumDriverVersion_Parms, MinDriverVersionMajor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::NewProp_MinDriverVersionMinor = { "MinDriverVersionMinor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventGetDLSSGMinimumDriverVersion_Parms, MinDriverVersionMinor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::NewProp_MinDriverVersionMajor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::NewProp_MinDriverVersionMinor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "DLSS-G (Streamline)" },
		{ "Comment", "/** If QueryDLSS-G Support returns \"NotSupportedDriverOutOfDate\", then MinDriverVersionMajor and MinDriverVersionMinor contains the required driver version.*/" },
		{ "DisplayName", "Get DLSS-G Minimum DriverVersion" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
		{ "ToolTip", "If QueryDLSS-G Support returns \"NotSupportedDriverOutOfDate\", then MinDriverVersionMajor and MinDriverVersionMinor contains the required driver version." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "GetDLSSGMinimumDriverVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::StreamlineLibraryDLSSG_eventGetDLSSGMinimumDriverVersion_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics
	{
		struct StreamlineLibraryDLSSG_eventGetDLSSGMode_Parms
		{
			UStreamlineDLSSGMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventGetDLSSGMode_Parms, ReturnValue), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode, METADATA_PARAMS(nullptr, 0) }; // 63226576
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "DLSS-G (Streamline)" },
		{ "Comment", "/* Reads the console variables to infer the current DLSS-G mode*/" },
		{ "DisplayName", "Get DLSS-G Mode" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
		{ "ToolTip", "Reads the console variables to infer the current DLSS-G mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "GetDLSSGMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::StreamlineLibraryDLSSG_eventGetDLSSGMode_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics
	{
		struct StreamlineLibraryDLSSG_eventGetSupportedDLSSGModes_Parms
		{
			TArray<UStreamlineDLSSGMode> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode, METADATA_PARAMS(nullptr, 0) }; // 63226576
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventGetSupportedDLSSGModes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 63226576
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::Function_MetaDataParams[] = {
		{ "Category", "DLSS-G (Streamline)" },
		{ "Comment", "/** Retrieves all supported DLSS-G modes. Can be used to populate UI */" },
		{ "DisplayName", "Get Supported DLSS-G Modes" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
		{ "ToolTip", "Retrieves all supported DLSS-G modes. Can be used to populate UI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "GetSupportedDLSSGModes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::StreamlineLibraryDLSSG_eventGetSupportedDLSSGModes_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics
	{
		struct StreamlineLibraryDLSSG_eventIsDLSSGModeSupported_Parms
		{
			UStreamlineDLSSGMode DLSSGMode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DLSSGMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DLSSGMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_DLSSGMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_DLSSGMode = { "DLSSGMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventIsDLSSGModeSupported_Parms, DLSSGMode), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode, METADATA_PARAMS(nullptr, 0) }; // 63226576
	void Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StreamlineLibraryDLSSG_eventIsDLSSGModeSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StreamlineLibraryDLSSG_eventIsDLSSGModeSupported_Parms), &Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_DLSSGMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_DLSSGMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "DLSS-G (Streamline)" },
		{ "Comment", "/** Checks whether a DLSS-G mode is supported */" },
		{ "DisplayName", "Is DLSS-G Mode Supported" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
		{ "ToolTip", "Checks whether a DLSS-G mode is supported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "IsDLSSGModeSupported", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::StreamlineLibraryDLSSG_eventIsDLSSGModeSupported_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics
	{
		struct StreamlineLibraryDLSSG_eventIsDLSSGSupported_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StreamlineLibraryDLSSG_eventIsDLSSGSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StreamlineLibraryDLSSG_eventIsDLSSGSupported_Parms), &Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "DLSS-G (Streamline)" },
		{ "Comment", "/** Checks whether DLSS-G is supported by the current GPU. Further details can be retrieved via QueryDLSSGSupport*/" },
		{ "DisplayName", "Is NVIDIA DLSS-G Supported" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
		{ "ToolTip", "Checks whether DLSS-G is supported by the current GPU. Further details can be retrieved via QueryDLSSGSupport" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "IsDLSSGSupported", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::StreamlineLibraryDLSSG_eventIsDLSSGSupported_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics
	{
		struct StreamlineLibraryDLSSG_eventQueryDLSSGSupport_Parms
		{
			UStreamlineDLSSGSupport ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventQueryDLSSGSupport_Parms, ReturnValue), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport, METADATA_PARAMS(nullptr, 0) }; // 1160432423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::Function_MetaDataParams[] = {
		{ "Category", "DLSS-G (Streamline)" },
		{ "Comment", "/** Checks whether DLSS-G is supported by the current GPU\x09*/" },
		{ "DisplayName", "Query NVIDIA DLSS-G Support" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
		{ "ToolTip", "Checks whether DLSS-G is supported by the current GPU" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "QueryDLSSGSupport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::StreamlineLibraryDLSSG_eventQueryDLSSGSupport_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics
	{
		struct StreamlineLibraryDLSSG_eventSetDLSSGMode_Parms
		{
			UStreamlineDLSSGMode DLSSGMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DLSSGMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DLSSGMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::NewProp_DLSSGMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::NewProp_DLSSGMode = { "DLSSGMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventSetDLSSGMode_Parms, DLSSGMode), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode, METADATA_PARAMS(nullptr, 0) }; // 63226576
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::NewProp_DLSSGMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::NewProp_DLSSGMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "DLSS-G (Streamline)" },
		{ "Comment", "/** Sets the console variables to enable/disable DLSS-G*/" },
		{ "DisplayName", "Set DLSS-G Mode" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
		{ "ToolTip", "Sets the console variables to enable/disable DLSS-G" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "SetDLSSGMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::StreamlineLibraryDLSSG_eventSetDLSSGMode_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamlineLibraryDLSSG);
	UClass* Z_Construct_UClass_UStreamlineLibraryDLSSG_NoRegister()
	{
		return UStreamlineLibraryDLSSG::StaticClass();
	}
	struct Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode, "GetDefaultDLSSGMode" }, // 4025431267
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming, "GetDLSSGFrameTiming" }, // 3151653480
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion, "GetDLSSGMinimumDriverVersion" }, // 2366732595
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode, "GetDLSSGMode" }, // 641258831
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes, "GetSupportedDLSSGModes" }, // 3574941601
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported, "IsDLSSGModeSupported" }, // 2726169599
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported, "IsDLSSGSupported" }, // 673142913
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport, "QueryDLSSGSupport" }, // 717144756
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode, "SetDLSSGMode" }, // 2017569064
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StreamlineLibraryDLSSG.h" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamlineLibraryDLSSG>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::ClassParams = {
		&UStreamlineLibraryDLSSG::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamlineLibraryDLSSG()
	{
		if (!Z_Registration_Info_UClass_UStreamlineLibraryDLSSG.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamlineLibraryDLSSG.OuterSingleton, Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStreamlineLibraryDLSSG.OuterSingleton;
	}
	template<> STREAMLINEBLUEPRINT_API UClass* StaticClass<UStreamlineLibraryDLSSG>()
	{
		return UStreamlineLibraryDLSSG::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamlineLibraryDLSSG);
	UStreamlineLibraryDLSSG::~UStreamlineLibraryDLSSG() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_Statics::EnumInfo[] = {
		{ UStreamlineDLSSGSupport_StaticEnum, TEXT("UStreamlineDLSSGSupport"), &Z_Registration_Info_UEnum_UStreamlineDLSSGSupport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1160432423U) },
		{ UStreamlineDLSSGMode_StaticEnum, TEXT("UStreamlineDLSSGMode"), &Z_Registration_Info_UEnum_UStreamlineDLSSGMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 63226576U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStreamlineLibraryDLSSG, UStreamlineLibraryDLSSG::StaticClass, TEXT("UStreamlineLibraryDLSSG"), &Z_Registration_Info_UClass_UStreamlineLibraryDLSSG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamlineLibraryDLSSG), 494450272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_1991916276(TEXT("/Script/StreamlineBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
