#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM 10
int BinarySearch(int key, int a[], int right, int left);
int BubbleSort(int a[], int num);
int main(void)
{
	int j,found=0;
	int a[NUM];
	int right = NUM-1, left = 0, key;
	printf_s("請輸入十個整數:");
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);

	BubbleSort(a, NUM);
	printf_s("新的串列是:");
	for (j = 0; j < NUM; j++)
		printf("%4d", a[j]);

	printf_s("\n請輸入要搜尋的key:");
	scanf_s("%d", &key);
	//BinarySearch(key, a, right, left);
	found = BinarySearch(key, a, right, left) + 1;

	if (found>=1)
	{
		printf_s("key: %d 在第 %d 個位置\n", key, found);
	}
	else
	{
		printf_s("%d", -1);

	}
	printf("\n");
	system("pause");
	return 0;
}

int BubbleSort(int a[], int num)
{
	int i, j, tmp;
	_Bool check = true;
	for (i = 0; check && i < NUM - 1; i++)
	{
		check = false;
		for (j = 0; j < NUM - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				check = true;
			}

		}

	}
	return a;
}

int BinarySearch(int key, int a[], int right, int left)
{
	int middle = (right + left) / 2;

	if (left <= right)
	{

		if (key == a[middle])
			return middle;
		else if (key < a[middle])
		{
			right = middle - 1;
			return BinarySearch(key, a, right, left);
		}
		else if (key > a[middle])
		{
			left = middle + 1;
			return BinarySearch(key, a, right, left);
		}
	}
	else
		return -1;
}
