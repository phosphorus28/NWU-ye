#include<stdio.h>
int FiveDigitNumber(int x);
int main()
{
	int n;
	printf("����һ����K��0<K<1000\n");
	scanf_s("%d", &n);
	FiveDigitNumber(n);//ʹ���Զ��庯��
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
/*����һ����λ��a1a2a3a4a5���ɽ�����Ϊ��������
sub1=a1a2a3
sub2=a2a3a4
sub3=a3a4a5
���ڸ���һ��������K��Ҫ���������10000��30000֮����������������������λ������������Щ��λ������sub1,sub2,sub3���ɱ�K������
*/