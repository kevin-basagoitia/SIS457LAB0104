// Fill out your copyright notice in the Description page of Project Settings.


#include "NavePlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "Nave.h"

ANavePlayerController::ANavePlayerController()
{
}

void ANavePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	EnableInput(this);

	InputComponent->BindAxis("MoveHorizontal", this, &ANavePlayerController::MoveHorizontal);
	InputComponent->BindAxis("MoveVertical", this, &ANavePlayerController::MoveVertical);
}

void ANavePlayerController::BeginPlay()
{
	TArray<AActor*> CameraActors;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);


	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);
}

void ANavePlayerController::MoveHorizontal(float _AxisValue)
{
	auto MyPawn = Cast<ANave>(GetPawn());

	if (MyPawn) {
		MyPawn->MoveHorizontal(_AxisValue);
	}
}
void ANavePlayerController::MoveVertical(float _AxisValue)
{
	auto MyPawn = Cast<ANave>(GetPawn());

	if (MyPawn) {
		MyPawn->MoveVertical(_AxisValue);
	}
}
