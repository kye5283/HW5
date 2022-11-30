#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int *aPtr;

	a = 7;
	aPtr = &a;

	printf_s("The address of a is %p"
		"\nThe value of aPtr is %p", &a, aPtr);

	printf_s("\n\nThe value of a is %d"
		"\nThe value of *aPtr is %d", a, *aPtr);

	printf_s("\n\nShowing that * and & are complements of "
		"ezch other\n&*aPtr = %p"
		"\n*&aPtr = %p\n", &*aPtr, *&aPtr);
	system("pause");
	return 0;
}