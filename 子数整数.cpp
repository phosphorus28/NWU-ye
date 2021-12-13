#include<stdio.h>
int FiveDigitNumber(int x);
int main()
{
	int n;
	printf("输入一个数K，0<K<1000\n");
	scanf_s("%d", &n);
	FiveDigitNumber(n);//使用自定义函数
	return 0;
}
int FiveDigitNumber(int x)
{
	int  sub1, sub2, sub3, num;
	for (num = 10000; num < 30001; num++)
	{
		sub1 = num / 100;
		sub2 = (num % 1000) / 10;
		sub3 = num % 100;
		if (sub1 % x == 0 && sub2 % x == 0 && sub3 % x == 0)
			printf("%d\n", num);
	}
	return 1;
}
/*对于一个五位数a1a2a3a4a5，可将其拆分为三个子数
sub1=a1a2a3
sub2=a2a3a4
sub3=a3a4a5
现在给定一个正整数K，要求你编程求出10000到30000之间所有满足下述条件的五位数，条件是这些五位数的三sub1,sub2,sub3都可被K整除。
*/