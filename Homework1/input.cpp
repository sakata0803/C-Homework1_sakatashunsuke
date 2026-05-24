#include <stdio.h>
#include <time.h>

int random()
{
	int t = (int)time(nullptr);
	int answer = t % 10;

	return answer;
}

int input()
{
	int x = 1;
	scanf_s("%d", &x);

	return x;
}
