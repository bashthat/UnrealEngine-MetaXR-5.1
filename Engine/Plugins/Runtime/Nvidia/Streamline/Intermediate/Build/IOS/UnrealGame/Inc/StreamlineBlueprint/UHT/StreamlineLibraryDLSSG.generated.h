// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StreamlineLibraryDLSSG.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class UStreamlineDLSSGMode : uint8;
enum class UStreamlineDLSSGSupport : uint8;
#ifdef STREAMLINEBLUEPRINT_StreamlineLibraryDLSSG_generated_h
#error "StreamlineLibraryDLSSG.generated.h already included, missing '#pragma once' in StreamlineLibraryDLSSG.h"
#endif
#define STREAMLINEBLUEPRINT_StreamlineLibraryDLSSG_generated_h

#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDLSSGFrameTiming); \
	DECLARE_FUNCTION(execGetDefaultDLSSGMode); \
	DECLARE_FUNCTION(execGetDLSSGMode); \
	DECLARE_FUNCTION(execSetDLSSGMode); \
	DECLARE_FUNCTION(execGetSupportedDLSSGModes); \
	DECLARE_FUNCTION(execIsDLSSGModeSupported); \
	DECLARE_FUNCTION(execGetDLSSGMinimumDriverVersion); \
	DECLARE_FUNCTION(execQueryDLSSGSupport); \
	DECLARE_FUNCTION(execIsDLSSGSupported);


#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDLSSGFrameTiming); \
	DECLARE_FUNCTION(execGetDefaultDLSSGMode); \
	DECLARE_FUNCTION(execGetDLSSGMode); \
	DECLARE_FUNCTION(execSetDLSSGMode); \
	DECLARE_FUNCTION(execGetSupportedDLSSGModes); \
	DECLARE_FUNCTION(execIsDLSSGModeSupported); \
	DECLARE_FUNCTION(execGetDLSSGMinimumDriverVersion); \
	DECLARE_FUNCTION(execQueryDLSSGSupport); \
	DECLARE_FUNCTION(execIsDLSSGSupported);


#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_ACCESSORS
#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreamlineLibraryDLSSG(); \
	friend struct Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics; \
public: \
	DECLARE_CLASS(UStreamlineLibraryDLSSG, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StreamlineBlueprint"), STREAMLINEBLUEPRINT_API) \
	DECLARE_SERIALIZER(UStreamlineLibraryDLSSG)


#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUStreamlineLibraryDLSSG(); \
	friend struct Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics; \
public: \
	DECLARE_CLASS(UStreamlineLibraryDLSSG, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StreamlineBlueprint"), STREAMLINEBLUEPRINT_API) \
	DECLARE_SERIALIZER(UStreamlineLibraryDLSSG)


#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STREAMLINEBLUEPRINT_API UStreamlineLibraryDLSSG(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamlineLibraryDLSSG) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STREAMLINEBLUEPRINT_API, UStreamlineLibraryDLSSG); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamlineLibraryDLSSG); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STREAMLINEBLUEPRINT_API UStreamlineLibraryDLSSG(UStreamlineLibraryDLSSG&&); \
	STREAMLINEBLUEPRINT_API UStreamlineLibraryDLSSG(const UStreamlineLibraryDLSSG&); \
public: \
	STREAMLINEBLUEPRINT_API virtual ~UStreamlineLibraryDLSSG();


#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STREAMLINEBLUEPRINT_API UStreamlineLibraryDLSSG(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STREAMLINEBLUEPRINT_API UStreamlineLibraryDLSSG(UStreamlineLibraryDLSSG&&); \
	STREAMLINEBLUEPRINT_API UStreamlineLibraryDLSSG(const UStreamlineLibraryDLSSG&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STREAMLINEBLUEPRINT_API, UStreamlineLibraryDLSSG); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamlineLibraryDLSSG); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamlineLibraryDLSSG) \
	STREAMLINEBLUEPRINT_API virtual ~UStreamlineLibraryDLSSG();


#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_50_PROLOG
#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_ACCESSORS \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_INCLASS \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_ACCESSORS \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STREAMLINEBLUEPRINT_API UClass* StaticClass<class UStreamlineLibraryDLSSG>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryDLSSG_h


#define FOREACH_ENUM_USTREAMLINEDLSSGSUPPORT(op) \
	op(UStreamlineDLSSGSupport::Supported) \
	op(UStreamlineDLSSGSupport::NotSupported) \
	op(UStreamlineDLSSGSupport::NotSupportedIncompatibleHardware) \
	op(UStreamlineDLSSGSupport::NotSupportedDriverOutOfDate) \
	op(UStreamlineDLSSGSupport::NotSupportedOperatingSystemOutOfDate) \
	op(UStreamlineDLSSGSupport::NotSupportedByPlatformAtBuildTime) \
	op(UStreamlineDLSSGSupport::NotSupportedIncompatibleAPICaptureToolActive) 

enum class UStreamlineDLSSGSupport : uint8;
template<> struct TIsUEnumClass<UStreamlineDLSSGSupport> { enum { Value = true }; };
template<> STREAMLINEBLUEPRINT_API UEnum* StaticEnum<UStreamlineDLSSGSupport>();

#define FOREACH_ENUM_USTREAMLINEDLSSGMODE(op) \
	op(UStreamlineDLSSGMode::Off) \
	op(UStreamlineDLSSGMode::On) 

enum class UStreamlineDLSSGMode : uint8;
template<> struct TIsUEnumClass<UStreamlineDLSSGMode> { enum { Value = true }; };
template<> STREAMLINEBLUEPRINT_API UEnum* StaticEnum<UStreamlineDLSSGMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS