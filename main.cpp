#include <stdio.h>

int Normal(int n)
{
	return (n * 1072);
}

int Recursive(int n)
{
	if (n <= 1)
	{
		return (100);
	}

	return (Recursive(n - 1) * 2 - 50);
}


int main(void)
{
	int time = 9;
	int result[2] = { 0,0 };

	result[0] = Normal(time);
	result[1] = Recursive(time);

	printf("一般的：%d時間働くと%d\n", time, result[0]);
	printf("再帰的：%d時間働くと%d\n", time, result[1]);

	return 0;
}