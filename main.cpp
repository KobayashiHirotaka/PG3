#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>

typedef void (*PFunc)(int, char *);

void SetTimeout(PFunc p, int second)
{
    Sleep(second * 1000);
}

void DiceRoll(PFunc p)
{
    srand(time(NULL));
    int result = rand() % 6 + 1;

    char guess[10];
    printf("奇数か偶数かを入力してください : ");
    scanf_s("%s", guess, sizeof(guess));

    SetTimeout(p, 3);

    p(result, guess);
}

void CheckResult(int result, char* guess)
{
    int diceResult = (result % 2 == 1);

    if ((diceResult && strcmp(guess, "奇数") == 0) || (!diceResult && strcmp(guess, "偶数") == 0))
    {
        printf("結果は正解です。\n");

    } else {
        printf("結果は不正解です。\n");
    }

    printf("出た目は %d です。\n", result);
}

int main() 
{
    PFunc p = CheckResult;

    DiceRoll(p);

    return 0;
}
