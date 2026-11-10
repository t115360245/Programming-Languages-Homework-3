#include <stdio.h>

int max(int x, int y, int z);

int main()
{
    int num1, num2, num3;
    printf("Enter three intergers:");
    scanf_s("%d %d %d", &num1, &num2, &num3);
    printf("Maximum is : %d\n", max(num1, num2, num3));
    return 0;

}

int max(int x, int y, int z)
{
    int max = x;

    if (y > max)
        max = y;

    if (z > max)
        max = z;

    return max;
}
