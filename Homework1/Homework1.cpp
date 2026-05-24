#include <iostream>
#include <time.h>
#include "input.h"
#include "judge.h"

int main()
{	
	int answer = random();

	while (true)
	{
		int x = input();
		int result = check(answer, x);
		showResult(result);
		if (result == 3)
		{
			break;
		}
	}
	return 0;
}
