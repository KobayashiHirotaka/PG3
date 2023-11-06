#include <iostream>
#include "Pair.h"

int main()
{
	Pair<int, int>pair1(1, 2);
	std::cout << pair1.Min() << std::endl;

	Pair<int, float>pair2(2, 3.0f);
	std::cout << pair2.Min() << std::endl;

	Pair<int, double>pair3(3, 4.0f);
	std::cout << pair3.Min() << std::endl;

	Pair<float, float>pair4(4.0f, 5.0f);
	std::cout << pair4.Min() << std::endl;

	Pair<float, double>pair5(5.0f, 6.0f);
	std::cout << pair5.Min() << std::endl;

	Pair<double, double>pair6(6.0f, 7.0f);
	std::cout << pair6.Min() << std::endl;

	return 0;
}