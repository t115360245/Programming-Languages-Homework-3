#include <stdio.h>

char tran(char x);

int main()
{
	char alp;
	printf("Enter the alphabet ");
	scanf_s("%c", &alp, 1);
	printf("%c", tran(alp));
	return 0;
}

char tran(char x)
{
	if (x >= 'A' && x <= 'Z')
		return x + 32;

	else
		return x - 32;

}
