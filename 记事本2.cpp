#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define max_rem 50
#define msg_len 100
#define day_len 3
int read_line(char str[], int n);
struct reminders
{
	char ReminderList[day_len + msg_len];
}rem_num[max_rem + 1];
int main()
{
	int num, day, j, i;
	char day_str[3];
	char reminder_str[msg_len + 1] = {0};
	num = 0;
	for(;;)
	{
		printf("Enter day and reminder: ");
		scanf_s("%2d", &day);
		if (day == 0)
		{
			break;
		}
		sprintf(day_str, "%2d", day);
		read_line(reminder_str, msg_len);
		strcpy(rem_num[num].ReminderList, day_str);
		strcat(rem_num[num].ReminderList, reminder_str);;
		for (i = 0; i < num; i++)
		{
			if (strcmp(rem_num[num].ReminderList, rem_num[i].ReminderList) > 0)
				break;
			else
			{
				strcpy(rem_num[num + 1].ReminderList, rem_num[num].ReminderList);
				for (j = num; j > i; j--)
				{
					strcpy(rem_num[j].ReminderList, rem_num[j - 1].ReminderList);
				}
				strcpy(rem_num[i].ReminderList, rem_num[num+1].ReminderList);
			}
		}
		num++;
	}
	printf("\nDay Reminder\n");
	for (i = 0; i < num; i++)
	{
		printf("%s\n", rem_num[i].ReminderList);
	}
	return 0;
}
int read_line(char str[], int n)
{
	int ch, i = 0;
	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0'; 
	return i;
}