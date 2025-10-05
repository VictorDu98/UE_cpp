// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/World.h"
#include "Engine/Level.h"

void UMyBlueprintFunctionLibrary::GetLightMap(
	UWorld* currentWorld,
	TArray <UTexture2D*>& output)
{
	ULevel* currentLevel= currentWorld->GetCurrentLevel();

	currentWorld->GetLightMapsAndShadowMaps(currentLevel,output,false);
	UE_LOG(LogTemp, Warning, TEXT("hello"));
}