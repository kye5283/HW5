#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int findMax(int a[]);
int size;
int main(void)
{
	int a[SIZE];
	int max=-9999,i;
	printf_s("��J�ƭȪ��Ӽ�:");
	scanf_s("%d", &size);
	printf_s("��J�ƭ�:");
	for ( i = 0; i < size; i++)
	{
		scanf_s("%d", &a[i]);
	}

	max = findMax(a);
	printf_s("�̤j���Ƭ� : %d\n", max);
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