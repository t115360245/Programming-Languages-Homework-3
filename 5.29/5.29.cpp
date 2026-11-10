#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
	int num1, num2;
	printf("請輸入兩個整數");
	scanf_s("%d %d", &num1, &num2);
	printf("%d %d 的最小公倍數為:%d\n", num1, num2, lcm(num1, num2));

}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {

    if (a == 0 || b == 0) {
        return 0;
    }

    a = abs(a);
    b = abs(b);

    return (a / gcd(a, b)) * b;
}
