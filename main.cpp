#include <stdio.h>
#include "Pair.h"

int main()
{
	Pair<int, int>pair1(1, 2);
	printf("%d\n", pair1.Min());

	Pair<int, float>pair2(2, 3.0f);
	printf("%d\n", pair2.Min());

	Pair<int, double>pair3(3, 4.0f);
	printf("%d\n", pair3.Min());

	Pair<float, float>pair4(4.0f, 5.0f);
	printf("%f\n", pair4.Min());

	Pair<float, double>pair5(5.0f, 6.0f);
	printf("%f\n", pair5.Min());

	Pair<double, double>pair6(6.0f, 7.0f);
	printf("%f\n", pair6.Min());

	return 0;
}