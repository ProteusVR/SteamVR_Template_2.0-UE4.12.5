// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
struct FBPActorGripInformation;
class UPrimitiveComponent;
struct FTransform;
struct FVector;
struct FBPVRComponentPosRep;
#ifdef VREXPANSIONPLUGIN_GripMotionControllerComponent_generated_h
#error "GripMotionControllerComponent.generated.h already included, missing '#pragma once' in GripMotionControllerComponent.h"
#endif
#define VREXPANSIONPLUGIN_GripMotionControllerComponent_generated_h

#define DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_RPC_WRAPPERS \
	virtual void NotifyDrop_Implementation(FBPActorGripInformation const& NewDrop, bool bSimulate); \
	virtual bool Server_SendControllerTransform_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendControllerTransform_Implementation(FBPVRComponentPosRep NewTransform); \
 \
	DECLARE_FUNCTION(execRemoveSecondaryAttachmentPoint) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_GrippedActorToRemoveAttachment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->RemoveSecondaryAttachmentPoint(Z_Param_GrippedActorToRemoveAttachment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSecondaryAttachmentPoint) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_GrippedActorToAddAttachment); \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryPointComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->AddSecondaryAttachmentPoint(Z_Param_GrippedActorToAddAttachment,Z_Param_SecondaryPointComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TeleportMoveGrip(Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrippedComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToMove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TeleportMoveGrippedComponent(Z_Param_ComponentToMove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrippedActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_GrippedActorToMove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TeleportMoveGrippedActor(Z_Param_GrippedActorToMove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostTeleportMoveGrippedActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PostTeleportMoveGrippedActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrippedActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_GrippedActorsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetGrippedActors(Z_Param_Out_GrippedActorsArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToControllerRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->ConvertToControllerRelativeTransform(Z_Param_Out_InTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsVelocities) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetPhysicsVelocities(Z_Param_Out_Grip,Z_Param_Out_AngularVelocity,Z_Param_Out_LinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyDrop) \
	{ \
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_NewDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->NotifyDrop_Implementation(Z_Param_NewDrop,Z_Param_bSimulate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropGrip(Z_Param_Out_Grip,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropComponent(Z_Param_ComponentToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSnapToSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripCollisionType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bTurnOffLateUpdateWhenColliding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GripComponent(Z_Param_ComponentToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,EGripCollisionType(Z_Param_GripCollisionType),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bTurnOffLateUpdateWhenColliding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropActor(Z_Param_ActorToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSnapToSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripCollisionType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bTurnOffLateUpdateWhenColliding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GripActor(Z_Param_ActorToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,EGripCollisionType(Z_Param_GripCollisionType),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bTurnOffLateUpdateWhenColliding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendControllerTransform) \
	{ \
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_SendControllerTransform_Validate(Z_Param_NewTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendControllerTransform_Validate")); \
			return; \
		} \
		this->Server_SendControllerTransform_Implementation(Z_Param_NewTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedControllerTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_ReplicatedControllerTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_GrippedActors) \
	{ \
		P_GET_TARRAY(FBPActorGripInformation,Z_Param_OriginalArrayState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_GrippedActors(Z_Param_OriginalArrayState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsTracked(); \
		P_NATIVE_END; \
	}


#define DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NotifyDrop_Implementation(FBPActorGripInformation const& NewDrop, bool bSimulate); \
	virtual bool Server_SendControllerTransform_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendControllerTransform_Implementation(FBPVRComponentPosRep NewTransform); \
 \
	DECLARE_FUNCTION(execRemoveSecondaryAttachmentPoint) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_GrippedActorToRemoveAttachment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->RemoveSecondaryAttachmentPoint(Z_Param_GrippedActorToRemoveAttachment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSecondaryAttachmentPoint) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_GrippedActorToAddAttachment); \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryPointComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->AddSecondaryAttachmentPoint(Z_Param_GrippedActorToAddAttachment,Z_Param_SecondaryPointComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TeleportMoveGrip(Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrippedComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToMove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TeleportMoveGrippedComponent(Z_Param_ComponentToMove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrippedActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_GrippedActorToMove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TeleportMoveGrippedActor(Z_Param_GrippedActorToMove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostTeleportMoveGrippedActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PostTeleportMoveGrippedActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrippedActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_GrippedActorsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetGrippedActors(Z_Param_Out_GrippedActorsArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToControllerRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->ConvertToControllerRelativeTransform(Z_Param_Out_InTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsVelocities) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetPhysicsVelocities(Z_Param_Out_Grip,Z_Param_Out_AngularVelocity,Z_Param_Out_LinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyDrop) \
	{ \
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_NewDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->NotifyDrop_Implementation(Z_Param_NewDrop,Z_Param_bSimulate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropGrip(Z_Param_Out_Grip,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropComponent(Z_Param_ComponentToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSnapToSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripCollisionType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bTurnOffLateUpdateWhenColliding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GripComponent(Z_Param_ComponentToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,EGripCollisionType(Z_Param_GripCollisionType),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bTurnOffLateUpdateWhenColliding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropActor(Z_Param_ActorToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSnapToSocketName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_GripCollisionType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bTurnOffLateUpdateWhenColliding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GripActor(Z_Param_ActorToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,EGripCollisionType(Z_Param_GripCollisionType),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bTurnOffLateUpdateWhenColliding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendControllerTransform) \
	{ \
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_SendControllerTransform_Validate(Z_Param_NewTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendControllerTransform_Validate")); \
			return; \
		} \
		this->Server_SendControllerTransform_Implementation(Z_Param_NewTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedControllerTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_ReplicatedControllerTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_GrippedActors) \
	{ \
		P_GET_TARRAY(FBPActorGripInformation,Z_Param_OriginalArrayState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_GrippedActors(Z_Param_OriginalArrayState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsTracked(); \
		P_NATIVE_END; \
	}


#define DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_EVENT_PARMS \
	struct GripMotionControllerComponent_eventNotifyDrop_Parms \
	{ \
		FBPActorGripInformation NewDrop; \
		bool bSimulate; \
	}; \
	struct GripMotionControllerComponent_eventServer_SendControllerTransform_Parms \
	{ \
		FBPVRComponentPosRep NewTransform; \
	};


extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_NotifyDrop;
extern VREXPANSIONPLUGIN_API  FName VREXPANSIONPLUGIN_Server_SendControllerTransform;
#define DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_CALLBACK_WRAPPERS
#define DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUGripMotionControllerComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UGripMotionControllerComponent(); \
	public: \
	DECLARE_CLASS(UGripMotionControllerComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGripMotionControllerComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_INCLASS \
	private: \
	static void StaticRegisterNativesUGripMotionControllerComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UGripMotionControllerComponent(); \
	public: \
	DECLARE_CLASS(UGripMotionControllerComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGripMotionControllerComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGripMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGripMotionControllerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGripMotionControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGripMotionControllerComponent); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGripMotionControllerComponent(const UGripMotionControllerComponent& InCopy); \
public:


#define DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGripMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UGripMotionControllerComponent(const UGripMotionControllerComponent& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGripMotionControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGripMotionControllerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGripMotionControllerComponent)


#define DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_19_PROLOG \
	DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_EVENT_PARMS


#define DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_RPC_WRAPPERS \
	DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_CALLBACK_WRAPPERS \
	DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_INCLASS \
	DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_CALLBACK_WRAPPERS \
	DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_INCLASS_NO_PURE_DECLS \
	DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GripMotionControllerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DELETE_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
