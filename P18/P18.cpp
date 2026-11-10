#include <stdio.h>
#include<string.h>

int main()
{
	char str1[60] = "Welcome";
	char str2[60];

	int len;
	strcpy_s(str2, str1);
	printf("string=%s\n", str2);

	len = strlen(str2);
	printf("字串長度為%d\n", len);

	return 0;
}
