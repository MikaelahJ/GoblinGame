// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoblinGame/GoblinGamePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoblinGamePlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GOBLINGAME_API UClass* Z_Construct_UClass_AGoblinGamePlayerController();
GOBLINGAME_API UClass* Z_Construct_UClass_AGoblinGamePlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_GoblinGame();
// End Cross Module References

// Begin Class AGoblinGamePlayerController
void AGoblinGamePlayerController::StaticRegisterNativesAGoblinGamePlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoblinGamePlayerController);
UClass* Z_Construct_UClass_AGoblinGamePlayerController_NoRegister()
{
	return AGoblinGamePlayerController::StaticClass();
}
struct Z_Construct_UClass_AGoblinGamePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GoblinGamePlayerController.h" },
		{ "ModuleRelativePath", "GoblinGamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "GoblinGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoblinGamePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoblinGamePlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoblinGamePlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoblinGamePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoblinGamePlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoblinGamePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGoblinGamePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_GoblinGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoblinGamePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoblinGamePlayerController_Statics::ClassParams = {
	&AGoblinGamePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGoblinGamePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGoblinGamePlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoblinGamePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGoblinGamePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGoblinGamePlayerController()
{
	if (!Z_Registration_Info_UClass_AGoblinGamePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoblinGamePlayerController.OuterSingleton, Z_Construct_UClass_AGoblinGamePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGoblinGamePlayerController.OuterSingleton;
}
template<> GOBLINGAME_API UClass* StaticClass<AGoblinGamePlayerController>()
{
	return AGoblinGamePlayerController::StaticClass();
}
AGoblinGamePlayerController::AGoblinGamePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGoblinGamePlayerController);
AGoblinGamePlayerController::~AGoblinGamePlayerController() {}
// End Class AGoblinGamePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGamePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGoblinGamePlayerController, AGoblinGamePlayerController::StaticClass, TEXT("AGoblinGamePlayerController"), &Z_Registration_Info_UClass_AGoblinGamePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoblinGamePlayerController), 1960857835U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGamePlayerController_h_638318377(TEXT("/Script/GoblinGame"),
	Z_CompiledInDeferFile_FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGamePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGamePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
