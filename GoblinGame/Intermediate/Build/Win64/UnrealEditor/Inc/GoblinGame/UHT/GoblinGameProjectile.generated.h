// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoblinGameProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GOBLINGAME_GoblinGameProjectile_generated_h
#error "GoblinGameProjectile.generated.h already included, missing '#pragma once' in GoblinGameProjectile.h"
#endif
#define GOBLINGAME_GoblinGameProjectile_generated_h

#define FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoblinGameProjectile(); \
	friend struct Z_Construct_UClass_AGoblinGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AGoblinGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoblinGame"), NO_API) \
	DECLARE_SERIALIZER(AGoblinGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGoblinGameProjectile(AGoblinGameProjectile&&); \
	AGoblinGameProjectile(const AGoblinGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoblinGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoblinGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoblinGameProjectile) \
	NO_API virtual ~AGoblinGameProjectile();


#define FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGameProjectile_h_12_PROLOG
#define FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOBLINGAME_API UClass* StaticClass<class AGoblinGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
