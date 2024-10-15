// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPC/NPCBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOBLINGAME_NPCBase_generated_h
#error "NPCBase.generated.h already included, missing '#pragma once' in NPCBase.h"
#endif
#define GOBLINGAME_NPCBase_generated_h

#define FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_Public_NPC_NPCBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCBase(); \
	friend struct Z_Construct_UClass_ANPCBase_Statics; \
public: \
	DECLARE_CLASS(ANPCBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GoblinGame"), NO_API) \
	DECLARE_SERIALIZER(ANPCBase)


#define FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_Public_NPC_NPCBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANPCBase(ANPCBase&&); \
	ANPCBase(const ANPCBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPCBase) \
	NO_API virtual ~ANPCBase();


#define FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_Public_NPC_NPCBase_h_11_PROLOG
#define FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_Public_NPC_NPCBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_Public_NPC_NPCBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_Public_NPC_NPCBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOBLINGAME_API UClass* StaticClass<class ANPCBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_GoblinGame_GoblinGame_Source_GoblinGame_Public_NPC_NPCBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
