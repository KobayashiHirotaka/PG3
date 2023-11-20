#include <iostream>
#include <functional>
#include <random>
#include <string>
#include <Windows.h>

typedef void (pFunc)(std::string&, int);

void SetTimeout(pFunc p, int second, std::string& answer, int result)
{
    Sleep(second * 1000);
    p(answer, result);
}

int DiceRoll(std::mt19937& randomEngine)
{
    std::uniform_int_distribution<> distribution(1, 6);
    return distribution(randomEngine);
}

void CheckResult(std::string& answer, int result)
{
    int diceResult = result % 2 == 1;

    if (diceResult && answer == "奇数" || !diceResult && answer == "偶数")
    {
        std::cout << "正解" << std::endl;

    } else {
        std::cout << "不正解" << std::endl;
    }

    std::cout << "出た目は" << result << "" << "です" << std::endl;
}

int main()
{
    std::random_device seedGenerator;
    std::mt19937 randomEngine(seedGenerator());

    int second = 3;

    std::function<void(pFunc p, int second, std::string& answer, int result)> fx = SetTimeout;

    [fx, second, &randomEngine]() {
        std::cout << "奇数か偶数を入力してください" << std::endl;
        std::string str;
        std::cin >> str;
        int result = DiceRoll(randomEngine);
        fx(CheckResult, second, str, result);
    }();

    return 0;
}