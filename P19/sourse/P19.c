#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int b[] = { 10,20,30,40 };
	int *bPtr = b;
	int i;
	int offset;

	printf_s("Array b printed with:\nArray subscript notation\n");
	for (i = 0; i < 4; i++)
	{
		printf_s("b[%d] = %d\n", i, b[i]);
	}
	printf_s("\nPointer/offset notation where\n"
		"the pointer is the array name\n");
	
	for (offset = 0; offset < 4; offset++)
	{
		printf_s("*(b + %d) = %d\n", offset, *(b + offset));
	}

	printf_s("\nPointer subscript notation\n");
	for (i = 0; i < 4; i++)
	{
		printf_s("bPtr[%d] = %d\n", i, bPtr[i]);
	}

	printf_s("\nPointer/offset notation\n");
	for (offset = 0; offset < 4; offset++)
	{
		printf_s("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));
	}
	system("pause");
	return 0;
}
