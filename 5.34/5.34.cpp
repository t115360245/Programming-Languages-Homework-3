#include <stdio.h>

long long power(int base, int exponent);

int main()
{
    int base = 3;
    int exponent = 4;

    printf("%d 的 %d 次方 = %lld\n", base, exponent, power(base, exponent));
    return 0;
}

long long power(int base, int exponent)
{
    if (exponent == 1)
        return base; 
    return base * power(base, exponent-1);
}