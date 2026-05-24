#include <stdio.h>

int check(int answer, int x)
{
	int result = 999;
	if (answer < x)
	{
		result = 1;
	}
	else if(answer > x)
	{
		result = 2;
	}
	else
	{
		result = 3;
	}
	return result;
}

void showResult(int result)
{
	if (result == 1)
	{
		printf("‘å‚«‚¢\n");
	}
	else if (result == 2)
	{
		printf("¬‚³‚¢\n");
	}
	else if (result == 3)
	{
		printf("ƒQ[ƒ€ƒNƒŠƒA\n");
	}
}