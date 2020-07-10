// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include <Runtime\Core\Public\Misc\Paths.h>
#include <Runtime\Core\Public\Misc\FileHelper.h>


FString UMyBlueprintFunctionLibrary::ReadConfigFile(FString filename)
{
	
	//Read file ini [project]/Content/Data/ 
		//you can change with other location
//	FString directory = FPaths::Combine(FPaths::GameContentDir(), "Data");
	FString result;
//	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();
//	if (file.CreateDirectory(*directory)) {
		FString myFile = FPaths::GameContentDir() + filename;
		FFileHelper::LoadFileToString(result, *myFile);
//	}
	return result;
}
