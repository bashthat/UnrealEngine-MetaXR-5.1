// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StreamlineLibraryReflex.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class UStreamlineReflexMode : uint8;
enum class UStreamlineReflexSupport : uint8;
#ifdef STREAMLINEBLUEPRINT_StreamlineLibraryReflex_generated_h
#error "StreamlineLibraryReflex.generated.h already included, missing '#pragma once' in StreamlineLibraryReflex.h"
#endif
#define STREAMLINEBLUEPRINT_StreamlineLibraryReflex_generated_h

#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRenderLatencyInMs); \
	DECLARE_FUNCTION(execGetGameLatencyInMs); \
	DECLARE_FUNCTION(execGetGameToRenderLatencyInMs); \
	DECLARE_FUNCTION(execGetDefaultReflexMode); \
	DECLARE_FUNCTION(execGetReflexMode); \
	DECLARE_FUNCTION(execSetReflexMode); \
	DECLARE_FUNCTION(execQueryReflexSupport); \
	DECLARE_FUNCTION(execIsReflexSupported);


#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRenderLatencyInMs); \
	DECLARE_FUNCTION(execGetGameLatencyInMs); \
	DECLARE_FUNCTION(execGetGameToRenderLatencyInMs); \
	DECLARE_FUNCTION(execGetDefaultReflexMode); \
	DECLARE_FUNCTION(execGetReflexMode); \
	DECLARE_FUNCTION(execSetReflexMode); \
	DECLARE_FUNCTION(execQueryReflexSupport); \
	DECLARE_FUNCTION(execIsReflexSupported);


#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_ACCESSORS
#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreamlineLibraryReflex(); \
	friend struct Z_Construct_UClass_UStreamlineLibraryReflex_Statics; \
public: \
	DECLARE_CLASS(UStreamlineLibraryReflex, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StreamlineBlueprint"), STREAMLINEBLUEPRINT_API) \
	DECLARE_SERIALIZER(UStreamlineLibraryReflex)


#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUStreamlineLibraryReflex(); \
	friend struct Z_Construct_UClass_UStreamlineLibraryReflex_Statics; \
public: \
	DECLARE_CLASS(UStreamlineLibraryReflex, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StreamlineBlueprint"), STREAMLINEBLUEPRINT_API) \
	DECLARE_SERIALIZER(UStreamlineLibraryReflex)


#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STREAMLINEBLUEPRINT_API UStreamlineLibraryReflex(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamlineLibraryReflex) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STREAMLINEBLUEPRINT_API, UStreamlineLibraryReflex); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamlineLibraryReflex); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STREAMLINEBLUEPRINT_API UStreamlineLibraryReflex(UStreamlineLibraryReflex&&); \
	STREAMLINEBLUEPRINT_API UStreamlineLibraryReflex(const UStreamlineLibraryReflex&); \
public: \
	STREAMLINEBLUEPRINT_API virtual ~UStreamlineLibraryReflex();


#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STREAMLINEBLUEPRINT_API UStreamlineLibraryReflex(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STREAMLINEBLUEPRINT_API UStreamlineLibraryReflex(UStreamlineLibraryReflex&&); \
	STREAMLINEBLUEPRINT_API UStreamlineLibraryReflex(const UStreamlineLibraryReflex&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STREAMLINEBLUEPRINT_API, UStreamlineLibraryReflex); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamlineLibraryReflex); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamlineLibraryReflex) \
	STREAMLINEBLUEPRINT_API virtual ~UStreamlineLibraryReflex();


#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_44_PROLOG
#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_ACCESSORS \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_INCLASS \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_ACCESSORS \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h_48_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STREAMLINEBLUEPRINT_API UClass* StaticClass<class UStreamlineLibraryReflex>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Nvidia_Streamline_Source_StreamlineBlueprint_Public_StreamlineLibraryReflex_h


#define FOREACH_ENUM_USTREAMLINEREFLEXMODE(op) \
	op(UStreamlineReflexMode::Disabled) \
	op(UStreamlineReflexMode::Enabled) \
	op(UStreamlineReflexMode::EnabledPlusBoost) 

enum class UStreamlineReflexMode : uint8;
template<> struct TIsUEnumClass<UStreamlineReflexMode> { enum { Value = true }; };
template<> STREAMLINEBLUEPRINT_API UEnum* StaticEnum<UStreamlineReflexMode>();

#define FOREACH_ENUM_USTREAMLINEREFLEXSUPPORT(op) \
	op(UStreamlineReflexSupport::Supported) \
	op(UStreamlineReflexSupport::NotSupported) 

enum class UStreamlineReflexSupport : uint8;
template<> struct TIsUEnumClass<UStreamlineReflexSupport> { enum { Value = true }; };
template<> STREAMLINEBLUEPRINT_API UEnum* StaticEnum<UStreamlineReflexSupport>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS