// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_NavePlayerController_generated_h
#error "NavePlayerController.generated.h already included, missing '#pragma once' in NavePlayerController.h"
#endif
#define STARFIGHTER_NavePlayerController_generated_h

#define STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_SPARSE_DATA
#define STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupInputComponent);


#define STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupInputComponent);


#define STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavePlayerController(); \
	friend struct Z_Construct_UClass_ANavePlayerController_Statics; \
public: \
	DECLARE_CLASS(ANavePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/STARFIGHTER"), NO_API) \
	DECLARE_SERIALIZER(ANavePlayerController)


#define STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANavePlayerController(); \
	friend struct Z_Construct_UClass_ANavePlayerController_Statics; \
public: \
	DECLARE_CLASS(ANavePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/STARFIGHTER"), NO_API) \
	DECLARE_SERIALIZER(ANavePlayerController)


#define STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavePlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavePlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavePlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavePlayerController(ANavePlayerController&&); \
	NO_API ANavePlayerController(const ANavePlayerController&); \
public:


#define STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavePlayerController(ANavePlayerController&&); \
	NO_API ANavePlayerController(const ANavePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavePlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANavePlayerController)


#define STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_12_PROLOG
#define STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_SPARSE_DATA \
	STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_RPC_WRAPPERS \
	STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_INCLASS \
	STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_SPARSE_DATA \
	STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_INCLASS_NO_PURE_DECLS \
	STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class ANavePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID STARFIGHTER_Source_STARFIGHTER_NavePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
