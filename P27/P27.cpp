#include <stdio.h>

long factorial(long num);

int main()
{
	int i;
	for (i = 0; i <= 10; i++)
		printf("%2d! = %1d\n", i, factorial(i));
	return 0;
}

long factorial(long num)
{
	if (num <= 1)
		return 1;
	else
		return num* factorial(num - 1);
}
