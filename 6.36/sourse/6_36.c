#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void strbackward(char str[]);

int main(void)
{
	char str[100];
	printf_s("輸入一組字串:");
	fflush(stdin);
	gets(str);
	strbackward(str);
	printf_s("字串反轉為:%s\n", str);

	system("pause");
	return 0;
}

void strbackward(char str[])
{
	static int i=0, len, tmp;
	len = strlen(str);

	if (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
		strbackward(str);
	}
}