// Fill out your copyright notice in the Description page of Project Settings.


#include "MyProjectPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


// Sets default values
AMyProjectPlayer::AMyProjectPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	RootComponent = Mesh;
	SpringArm->SetupAttachment(Mesh);
	Camera->SetupAttachment(SpringArm);

	Mesh->SetSimulatePhysics(true);
	Mesh->OnComponentHit.AddDynamic(this, &AMyProjectPlayer::OnHit);
}

// Called when the game starts or when spawned
void AMyProjectPlayer::BeginPlay()
{
	Super::BeginPlay();
	MoveForce *= Mesh->GetMass();
	JumpImpulse *= Mesh->GetMass();
	
}

// Called to bind functionality to input
void AMyProjectPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("MoveForward", this, &AMyProjectPlayer::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AMyProjectPlayer::MoveRight);
	InputComponent->BindAction("Jump", IE_Pressed, this, &AMyProjectPlayer::Jump);

}

void AMyProjectPlayer::MoveRight(float Value)
{
	const FVector Right = Camera->GetRightVector() * MoveForce * Value;
	Mesh->AddForce(Right);
}

void AMyProjectPlayer::MoveForward(float Value)
{
	const FVector Forward = Camera->GetForwardVector() * MoveForce * Value;
	Mesh->AddForce(Forward);
}

void AMyProjectPlayer::Jump()
{
	if (JumpCount >= MaxJumpCount) { return; }
	Mesh->AddImpulse(FVector(0, 0, JumpImpulse));
	JumpCount++;
}

void AMyProjectPlayer::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	const float HitDirection = Hit.Normal.Z;
	if (HitDirection > 0) {
		JumpCount = 0;
	}
}


