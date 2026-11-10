#include <stdio.h>

double power(double, int);

int main()
{
	int k;
	double ans;
	printf("計算3.5的k次方?請輸入k=");
	scanf_s("%d", &k);
	ans = power(3.5, k);
	printf("3.5的%d次方=%f\n", k,ans);
	return 0;
}

double power(double x, int n)
{
	double cal_ans = x;
	for (int i = 1; i < n; i++)
		cal_ans *= x;
	return cal_ans;
}
