// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoblinGamePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOBLINGAME_GoblinGamePlayerController_generated_h
#error "GoblinGamePlayerController.generated.h already included, missing '#pragma once' in GoblinGamePlayerController.h"
#endif
#define GOBLINGAME_GoblinGamePlayerController_generated_h

#define FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGamePlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoblinGamePlayerController(); \
	friend struct Z_Construct_UClass_AGoblinGamePlayerController_Statics; \
public: \
	DECLARE_CLASS(AGoblinGamePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoblinGame"), NO_API) \
	DECLARE_SERIALIZER(AGoblinGamePlayerController)


#define FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGamePlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoblinGamePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGoblinGamePlayerController(AGoblinGamePlayerController&&); \
	AGoblinGamePlayerController(const AGoblinGamePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoblinGamePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoblinGamePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoblinGamePlayerController) \
	NO_API virtual ~AGoblinGamePlayerController();


#define FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGamePlayerController_h_14_PROLOG
#define FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGamePlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGamePlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGamePlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOBLINGAME_API UClass* StaticClass<class AGoblinGamePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_GoblinGamePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
