#include <stdio.h>

int Recursive(int n)
{
	if (n <= 1)
	{
		return 100;
	}

	return (Recursive(n - 1) * 2 -50);
}


int main(void)
{
	int num = 4;
	int result = 0;

	result = Recursive(num);

	for (int i = 0; i < 24; i++)
	{
		printf("%d時間働くと%d\n", i, result);
	}

	return 0;
}