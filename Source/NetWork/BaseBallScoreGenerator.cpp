#include "BaseBallScoreGenerator.h"

TArray<int32> UBaseBallScoreGenerator::GenerateRandomNumber()
{
    TArray<int32> Result;
    TArray<int32> UsedNumbers;

    while (Result.Num() < 3)
    {
        int32 RandomNumber = FMath::RandRange(0, 9);

        if (!UsedNumbers.Contains(RandomNumber))
        {
            Result.Add(RandomNumber);
            UsedNumbers.Add(RandomNumber);
        }
    }

    return Result;
}
