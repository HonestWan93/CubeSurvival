// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVING_LivingGameModeBase_generated_h
#error "LivingGameModeBase.generated.h already included, missing '#pragma once' in LivingGameModeBase.h"
#endif
#define LIVING_LivingGameModeBase_generated_h

#define Living_Source_Living_LivingGameModeBase_h_15_RPC_WRAPPERS
#define Living_Source_Living_LivingGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Living_Source_Living_LivingGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALivingGameModeBase(); \
	friend LIVING_API class UClass* Z_Construct_UClass_ALivingGameModeBase(); \
public: \
	DECLARE_CLASS(ALivingGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Living"), NO_API) \
	DECLARE_SERIALIZER(ALivingGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Living_Source_Living_LivingGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALivingGameModeBase(); \
	friend LIVING_API class UClass* Z_Construct_UClass_ALivingGameModeBase(); \
public: \
	DECLARE_CLASS(ALivingGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Living"), NO_API) \
	DECLARE_SERIALIZER(ALivingGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Living_Source_Living_LivingGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALivingGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALivingGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALivingGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALivingGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALivingGameModeBase(ALivingGameModeBase&&); \
	NO_API ALivingGameModeBase(const ALivingGameModeBase&); \
public:


#define Living_Source_Living_LivingGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALivingGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALivingGameModeBase(ALivingGameModeBase&&); \
	NO_API ALivingGameModeBase(const ALivingGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALivingGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALivingGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALivingGameModeBase)


#define Living_Source_Living_LivingGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Living_Source_Living_LivingGameModeBase_h_12_PROLOG
#define Living_Source_Living_LivingGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Living_Source_Living_LivingGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Living_Source_Living_LivingGameModeBase_h_15_RPC_WRAPPERS \
	Living_Source_Living_LivingGameModeBase_h_15_INCLASS \
	Living_Source_Living_LivingGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Living_Source_Living_LivingGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Living_Source_Living_LivingGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Living_Source_Living_LivingGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Living_Source_Living_LivingGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Living_Source_Living_LivingGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Living_Source_Living_LivingGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
