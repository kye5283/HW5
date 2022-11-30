#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{	
	int counter[11] = { 0 };
	int dice1, dice2, sum;
	srand(time(0));

	int i;
	for (i = 0; i < 36000; i++)
	{
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		sum = dice1 + dice2;
		counter[sum - 2]++;
	}
	for (i = 2; i <= 12; i++)
	{
		printf_s("%d: %d\n", i, counter[i - 2]);
	}
	system("pause");
	return 0;
}
