#include<stdio.h>
int is_prime(int n);
int main()
{
	int j;
	printf("Enter a number: ");
	scanf_s("%d", &j);
	is_prime(j);
	return 0;
}
int is_prime(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("Not prime\n");
			break;
		}
		else
		{
			printf("Prime\n");
			break;
		}
	}
	return 1;
}