// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoblinGame/GoblinGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoblinGameGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GOBLINGAME_API UClass* Z_Construct_UClass_AGoblinGameGameMode();
GOBLINGAME_API UClass* Z_Construct_UClass_AGoblinGameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GoblinGame();
// End Cross Module References

// Begin Class AGoblinGameGameMode
void AGoblinGameGameMode::StaticRegisterNativesAGoblinGameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoblinGameGameMode);
UClass* Z_Construct_UClass_AGoblinGameGameMode_NoRegister()
{
	return AGoblinGameGameMode::StaticClass();
}
struct Z_Construct_UClass_AGoblinGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GoblinGameGameMode.h" },
		{ "ModuleRelativePath", "GoblinGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoblinGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGoblinGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GoblinGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoblinGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoblinGameGameMode_Statics::ClassParams = {
	&AGoblinGameGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoblinGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGoblinGameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGoblinGameGameMode()
{
	if (!Z_Registration_Info_UClass_AGoblinGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoblinGameGameMode.OuterSingleton, Z_Construct_UClass_AGoblinGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGoblinGameGameMode.OuterSingleton;
}
template<> GOBLINGAME_API UClass* StaticClass<AGoblinGameGameMode>()
{
	return AGoblinGameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGoblinGameGameMode);
AGoblinGameGameMode::~AGoblinGameGameMode() {}
// End Class AGoblinGameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGoblinGameGameMode, AGoblinGameGameMode::StaticClass, TEXT("AGoblinGameGameMode"), &Z_Registration_Info_UClass_AGoblinGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoblinGameGameMode), 3328902515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGameGameMode_h_3453643047(TEXT("/Script/GoblinGame"),
	Z_CompiledInDeferFile_FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
