// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoblinGame_init() {}
	GOBLINGAME_API UFunction* Z_Construct_UDelegateFunction_GoblinGame_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GoblinGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GoblinGame()
	{
		if (!Z_Registration_Info_UPackage__Script_GoblinGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GoblinGame_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GoblinGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0EDCD65A,
				0x293A9C5E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GoblinGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GoblinGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GoblinGame(Z_Construct_UPackage__Script_GoblinGame, TEXT("/Script/GoblinGame"), Z_Registration_Info_UPackage__Script_GoblinGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0EDCD65A, 0x293A9C5E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
