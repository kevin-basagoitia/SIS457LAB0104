// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_Nave_generated_h
#error "Nave.generated.h already included, missing '#pragma once' in Nave.h"
#endif
#define STARFIGHTER_Nave_generated_h

#define STARFIGHTER_Source_STARFIGHTER_Nave_h_13_SPARSE_DATA
#define STARFIGHTER_Source_STARFIGHTER_Nave_h_13_RPC_WRAPPERS
#define STARFIGHTER_Source_STARFIGHTER_Nave_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define STARFIGHTER_Source_STARFIGHTER_Nave_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANave(); \
	friend struct Z_Construct_UClass_ANave_Statics; \
public: \
	DECLARE_CLASS(ANave, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/STARFIGHTER"), NO_API) \
	DECLARE_SERIALIZER(ANave)


#define STARFIGHTER_Source_STARFIGHTER_Nave_h_13_INCLASS \
private: \
	static void StaticRegisterNativesANave(); \
	friend struct Z_Construct_UClass_ANave_Statics; \
public: \
	DECLARE_CLASS(ANave, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/STARFIGHTER"), NO_API) \
	DECLARE_SERIALIZER(ANave)


#define STARFIGHTER_Source_STARFIGHTER_Nave_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANave(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANave(ANave&&); \
	NO_API ANave(const ANave&); \
public:


#define STARFIGHTER_Source_STARFIGHTER_Nave_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANave(ANave&&); \
	NO_API ANave(const ANave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANave); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANave)


#define STARFIGHTER_Source_STARFIGHTER_Nave_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Nave() { return STRUCT_OFFSET(ANave, SM_Nave); } \
	FORCEINLINE static uint32 __PPO__FloatingMovement() { return STRUCT_OFFSET(ANave, FloatingMovement); }


#define STARFIGHTER_Source_STARFIGHTER_Nave_h_10_PROLOG
#define STARFIGHTER_Source_STARFIGHTER_Nave_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STARFIGHTER_Source_STARFIGHTER_Nave_h_13_PRIVATE_PROPERTY_OFFSET \
	STARFIGHTER_Source_STARFIGHTER_Nave_h_13_SPARSE_DATA \
	STARFIGHTER_Source_STARFIGHTER_Nave_h_13_RPC_WRAPPERS \
	STARFIGHTER_Source_STARFIGHTER_Nave_h_13_INCLASS \
	STARFIGHTER_Source_STARFIGHTER_Nave_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define STARFIGHTER_Source_STARFIGHTER_Nave_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STARFIGHTER_Source_STARFIGHTER_Nave_h_13_PRIVATE_PROPERTY_OFFSET \
	STARFIGHTER_Source_STARFIGHTER_Nave_h_13_SPARSE_DATA \
	STARFIGHTER_Source_STARFIGHTER_Nave_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	STARFIGHTER_Source_STARFIGHTER_Nave_h_13_INCLASS_NO_PURE_DECLS \
	STARFIGHTER_Source_STARFIGHTER_Nave_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class ANave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID STARFIGHTER_Source_STARFIGHTER_Nave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
