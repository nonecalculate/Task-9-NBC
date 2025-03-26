#include "BaseBallCheck.h"

FBaseBallResult UBaseBallCheck::CheckScore(FString TargetNumber, FString InputNumber)
{
    FBaseBallResult Result;
    Result.Strike = 0;
    Result.Ball = 0;
    Result.Out = 0;

    for (int32 i = 0; i < 3; ++i)
    {
        if (TargetNumber[i] == InputNumber[i+1])
        {
            Result.Strike++;
        }
        else
        {
            for (int32 j = 0; j < 3; ++j)
            {
                if (TargetNumber[i] == InputNumber[j+1])
                {
                    Result.Ball++;
                    break;
                }
            }
        }
    }

    Result.Out = 3 - Result.Strike - Result.Ball;
    return Result;
}

bool UBaseBallCheck::CheckString(FString InputString)
{
    if (InputString.Len() == 4 && InputString[0] == '/') return true;
    return false;
}
