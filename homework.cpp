#define _CRT_SECURE_NO_WARNINGS
/*This program will ask you to choose an option from a set of options at the start.The user can
enter a single number in the range 0 to 8 to choose the desired option and perform the required
functionality within the chosen option. When the functionality relevant to the chosen option has
been completed, the program should print that the chosen functionality is completed. And the
program will again ask to choose an option from the set of options. This will continue until 0
is entered by the user to exit from the program.*/
#include<stdio.h>
#include<math.h>
int main()
{
	int number;
	number = 0;
	while (1)
	{
		printf("0. Exit\n");
		printf("1. CalculateAreaRectangle\n");
		printf("2. ConvertSecondsToHoursMinutesSecond\n");
		printf("3. PrintTriangle\n");
		printf("4. CalculateAreaTriangleWithUserInput\n");
		printf("5. ConvertNumberToWord\n");
		printf("6. CompareDates\n");
		printf("7. ReverseDigits\n");
		printf("8. FindGCD\n");
		printf("enter a single number in the range 0 to 8\n");
		scanf("%d", &number);
		/*When 0 is entered, the program will terminate.*/
		if (number == 0)
			break;
		else
		{
			switch (number)
			{
			    case 1:
				/*The program will compute area of a rectangle.*/
			    {
				    float length, height, area;
				    length = 0;
				    height = 0;
				    area = 0;
					printf("Enter length of the rectangle\n");
					scanf("%f", &length);
					printf("Enter height of the rectangle\n");
					scanf("%f", &height);
					area = length * height;
					printf("The area of a rectangle of length %f and height %f is %f\n", length, height, area);
					printf("CalculateAreaRectangle is completed\n");
				};
				break;
				case 2:
				/*The program will convert integer representing number of seconds into the equivalent 
				time in hours, minutes and seconds.*/
				{
					int integer, hour, minute, second;
					printf("Enter an integer representing number of seconds\n");
					scanf("%d", &integer);
					hour = 0;
					minute = 0;
					second = 0;
					hour = integer / 3600;
					minute = (integer - hour * 3600) / 60;
					second = integer - 3600 * hour - 60 * minute;
					printf("%d seconds is equivalent to %d hours %d minutes %d seconds\n",integer , hour, minute, second);
					printf("ConvertSecondsToHoursMinutesSecond is completed\n");
				};
				break;
				case 3:
				/*The program will draw the right-angled triangle in stars, with the size given.*/
				{
					int size, i, j;/*"i" and "j" is an intermediate variable.*/
					size = 0;
					i = 1;
					printf("Enter an integer which will be both the width and the height of a right-angled triangle\n");
					scanf("%d", &size);
					while (i <= size)/*Change the height of the triangle.*/
					{
						j = 1;
						while (j <= i)/*Change the width of the triangle.*/
						{
							printf("*");
							j++;
						}
						i++;
						printf("\n");
					};
					printf("PrintTriangle is completed\n");
				};
				break;
				case 4:
				/*The program will calculate the area of the triangle by using Heron's Formula 
				and then output result*/
				{
					double side_a, side_b, side_c, area, p;/*"p" is an intermediate variable.*/
					side_a = 0;
					side_b = 0;
					side_c = 0;
					p = 0;
					area = 0;
					while (1)
					/*In this loop statement, the correctness of the input value can be checked. If the 
					numerical value is wrong, the user can re-enter three integers.*/
					{
						printf("Enter three integers and separate with ','\n");
						scanf("%lf,%lf,%lf", &side_a, &side_b, &side_c);
						p = 1 / 2.0 * (side_a + side_b + side_c);
						if (side_a + side_b > side_c && side_b + side_c > side_a && side_c + side_a > side_b)
						/*Judge whether the numerical value is right or wrong*/
						{
							area = sqrt(p * (p - side_a) * (p - side_b) * (p - side_c));/*Heron's Formula*/
							printf("The area of a triangle of dimensions a = %lf , b = %lf , c = %lf using Heron's Formula is %lf\n", side_a, side_b, side_c, area);
							break;
						}
						else
						{
							printf("Data cannot form a triangle\n");
						}
					}
					printf("CalculateAreaTriangleWithUserInput is completed\n");
				};
				break;
				case 5:
				/*The program will convert the number in word.*/
				{
					int num, tens, single;
					num = 0;
					tens = 0;
					single = 0;
					while (1)
					/*In this loop statement, the correctness of the input value can be checked. If the 
					numerical value is wrong, the user can re-enter a two-digit number.*/
					{
					    printf("Enter a two-digit integer\n");
						scanf("%d", &num);
						tens = num / 10;
						single = num % 10;
                    	if (10 <= num && num <= 99)
						/*Judge whether the numerical value is right or wrong*/
						{
							if (num >= 20)
							/*Classification discussion*/
							{
								switch (tens - 1)
								{
								    case 1:printf("twenty"); break;
									case 2:printf("thirty"); break;
									case 3:printf("forty"); break;
									case 4:printf("fifty"); break;
									case 5:printf("sixty"); break;
									case 6:printf("seventy"); break;
									case 7:printf("eighty"); break;
									default:printf("ninety"); break;
								}
								switch (single)
								{
								    case 1:printf("-one\n"); break;
									case 2:printf("-two\n"); break;
									case 3:printf("-three\n"); break;
									case 4:printf("-four\n"); break;
									case 5:printf("-five\n"); break;
									case 6:printf("-six\n"); break;
									case 7:printf("-seven\n"); break;
									case 8:printf("-eight\n"); break;
									case 9:printf("-nine\n"); break;
									default:printf("\n"); break;
								}
							}
							else
							{
								switch (single)
								{
								    case 1:printf("eleven\n"); break;
									case 2:printf("twelve\n"); break;
									case 3:printf("thirteen\n"); break;
									case 4:printf("fourteen\n"); break;
									case 5:printf("fifteen\n"); break;
									case 6:printf("sixteen\n"); break;
									case 7:printf("seventeen\n"); break;
									case 8:printf("eighteen\n"); break;
									case 9:printf("nineteen\n"); break;
									default:printf("ten\n"); break;
								}
							}
							break;
						}
						else
							printf("Please enter the correct number\n");
					}
					printf("ConvertNumberToWord is completed\n");
				};
				break;
				case 6:
				/*The program will find out the earliest date in three dates and print it. */
				{
					int month1, day1, year1, month2, day2, year2, month3, day3, year3, sum1, sum2, sum3;
					month1 = 0; day1 = 0; year1 = 0;
					month2 = 0; day2 = 0; year2 = 0;
					month3 = 0; day3 = 0; year3 = 0;
					sum1 = 0; sum2 = 0; sum3 = 0;
					printf("Enter three integers and separate with ','\n");
					printf("Enter first date in this form mm dd yyyy \n");
					scanf("%d,%d,%d", &month1, &day1, &year1);
					printf("Enter second date in this form mm dd yyyy \n");
					scanf("%d,%d,%d", &month2, &day2, &year2);
					printf("Enter third date in this form mm dd yyyy \n");
					scanf("%d,%d,%d", &month3, &day3, &year3);
					/*Compare by sum of numbers*/
					sum1 = year1 * 1000 + month1 * 10 + day1;
					sum2 = year2 * 1000 + month2 * 10 + day2;
					sum3 = year3 * 1000 + month3 * 10 + day3;
					if (sum1 > sum3 && sum2 > sum3)/*Classification discussion*/
						printf("%d %d %d is the earliest date\n", month3, day3, year3);
					else if (sum1 > sum2 && sum3 > sum2)
						printf("%d %d %d is the earliest date\n", month2, day2, year2);
					else
						printf("%d %d %d is the earliest date\n", month1, day1, year1);
					printf("CompareDates is completed\n");
				};
				break;
				case 7:
				/*The program will reverse the digits of the inputted number. */
				{
					int num, a;/*"a" is an intermediate variable.*/
					num = 0;
					a = 0;
					printf("Enter a number\n");
					scanf("%d", &num);
					while (num >= 1)
					{
						a = num % 10;
						num = num / 10;
						printf("%d\n", a);
					};
					printf("ReverseDigits is completed\n");
				};
				break;
				case 8:
				/*The program will find greatest common divisor (GCD) of the inputted two numbers.*/
				{
					int num1, num2, a, b;
					num1 = 0;
					num2 = 0;
					printf("Enter two numbers and separate with ','\n");
					scanf("%d,%d", &num1, &num2);
					a = num1;
					b = num2;
					while ((a - b) != 0)
					/*Use subtraction to calculate GCD*/
					{
						if (a > b)
							a = a - b;
						else
							b = b - a;
					}
					printf("GCD of %d and %d is %d\n", num1,num2,b);
					printf("FindGCD is completed\n");
				};
				break;
				default:printf("Suggest to choose the right option between 0 and 8\n");
				break;
			}
		}
	}
	return 0;
}