#include <iostream>
#include <functional>
#include <random>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void GamePlay(std::function<int(std::mt19937&)> func, std::mt19937& randomEngine) 
{
	char guess[10];
	printf("奇数か偶数かを入力してください : ");
	scanf_s("%s", guess, sizeof(guess));

	Sleep(3 * 1000);

	int diceResult = func(randomEngine);
	int result = (diceResult % 2 == 1);

	if ((result && strcmp(guess, "奇数") == 0) || (!result && strcmp(guess, "偶数") == 0))
	{
		printf("結果は正解です。\n");

	} else {
		printf("結果は不正解です。\n");
	}

	printf("出た目は %d です。\n", diceResult);
}

int main()
{
	std::random_device seedGenerator;
	std::mt19937 randomEngine(seedGenerator());

	std::function<int(std::mt19937&)> dice =[&](std::mt19937& randomEngine)
	{
		std::uniform_int_distribution<> distribution(1, 6);
		return distribution(randomEngine);
	};

	GamePlay(dice, randomEngine);

	return 0;
}