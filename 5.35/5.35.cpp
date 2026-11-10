#include <stdio.h>
#include <limits.h>

unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int prev1 = 0;
    unsigned long long int prev2 = 1;
    unsigned long long int current = 0;

    for (unsigned int i = 2; i <= n; ++i) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    return current;
}

int main(void) {
    
    printf("前 10 項費氏數列:\n");
    for (unsigned int i = 0; i < 10; ++i) {
        printf("F(%u) = %llu\n", i, fibonacci(i));
    }

   
    unsigned int n = 0;
    unsigned long long int prev = 0, curr = 1;
    while (curr >= prev) {
        prev = curr;
        n++;
        curr = fibonacci(n);
    }

    printf("\n系統可印出的最大費氏數為 F(%u) = %llu\n", n - 1, prev);
    return 0;
}