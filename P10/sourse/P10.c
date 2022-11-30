#include <stdio.h>
#include <stdlib.h>

void cubeByAdress(int *nPtr);

int main(void)
{
	int number = 5;
	printf_s("The original value of number is %d", number);
	cubeByAdress(&number);
	printf_s("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}

void cubeByAdress(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}
