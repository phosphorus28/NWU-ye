#include<stdio.h>
int main()
{
	int i, j, n;
	i = 1;
	while (i<10)
	{
		j = 1;
		while (j<10)
		{
			n = i * j;
			if (j <= i)
				printf("%d * %d = %-3d  ", j, i, n);
			else
				break;
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
//int main()
//{
//	int i, j, n;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{   
//			n = i * j;
//			if (j <= i)
//				printf("%d * %d = %-3d  ", j, i, n);
//			else
//				break;
//		}
//		printf("\n");
//	};
//	return 0;
//}