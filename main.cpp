#include <stdio.h>

int CalcNormal(int n)
{
	return (n * 1072);
}

int CalcRecursive(int n, int result = 100)
{
	if (n <= 1)
	{
		return (result);
	}

	return (result + CalcRecursive(n - 1, result * 2 - 50));
}


int main(void)
{
	int time = 8;
	int result[2] = { 0,0 };

	result[0] = CalcNormal(time);
	result[1] = CalcRecursive(time);

	printf("一般的：%d時間働くと%d\n", time, result[0]);
	printf("再帰的：%d時間働くと%d\n", time, result[1]);

	return 0;
}