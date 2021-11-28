// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MYPROJECT_MyProjectPlayer_generated_h
#error "MyProjectPlayer.generated.h already included, missing '#pragma once' in MyProjectPlayer.h"
#endif
#define MYPROJECT_MyProjectPlayer_generated_h

#define MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_SPARSE_DATA
#define MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectPlayer(); \
	friend struct Z_Construct_UClass_AMyProjectPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyProjectPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectPlayer)


#define MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectPlayer(); \
	friend struct Z_Construct_UClass_AMyProjectPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyProjectPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectPlayer)


#define MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectPlayer(AMyProjectPlayer&&); \
	NO_API AMyProjectPlayer(const AMyProjectPlayer&); \
public:


#define MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectPlayer(AMyProjectPlayer&&); \
	NO_API AMyProjectPlayer(const AMyProjectPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectPlayer)


#define MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AMyProjectPlayer, Mesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AMyProjectPlayer, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AMyProjectPlayer, Camera); } \
	FORCEINLINE static uint32 __PPO__MoveForce() { return STRUCT_OFFSET(AMyProjectPlayer, MoveForce); } \
	FORCEINLINE static uint32 __PPO__JumpImpulse() { return STRUCT_OFFSET(AMyProjectPlayer, JumpImpulse); } \
	FORCEINLINE static uint32 __PPO__MaxJumpCount() { return STRUCT_OFFSET(AMyProjectPlayer, MaxJumpCount); }


#define MyProject_Source_MyProject_Game_MyProjectPlayer_h_12_PROLOG
#define MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_SPARSE_DATA \
	MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_RPC_WRAPPERS \
	MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_INCLASS \
	MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_SPARSE_DATA \
	MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Game_MyProjectPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyProjectPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Game_MyProjectPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
