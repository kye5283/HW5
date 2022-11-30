#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int findMax(int a[]);
int size;
int main(void)
{
	int a[SIZE];
	int max=-9999,i;
	printf_s("块计计:");
	scanf_s("%d", &size);
	printf_s("块计:");
	for ( i = 0; i < size; i++)
	{
		scanf_s("%d", &a[i]);
	}

	max = findMax(a);
	printf_s("程计 : %d\n", max);
	system("pause");
	return 0;
}

int findMax(int a[])
{
	static int i = 0, max = -9999;
	if (size > 1)
	{
		if (i < SIZE)
		{
			if (max < a[i])
				max = a[i];
			i++;
			findMax(a);
		}
		return max;
	}
	else
	{
		return a[0];
	}
}