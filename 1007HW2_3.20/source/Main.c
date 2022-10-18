#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdbool.h>

//111360238
float hours, rate,overtime, overtimepay,salarys;

int main()
{
	while (true)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%f", &hours);
		if (hours==-1)
		{
			break;
		}
		
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &rate);
		salarys = hours * rate;
		
		if (hours<=40)
		{
			printf("Salary is %.2f", salarys);
		}
		else if (hours>40)
		{
			overtime = hours - 40;
			overtimepay = (overtime*rate) / 2;
			salarys = salarys + overtimepay;
			printf("Salary is %.2f", salarys);
		}
		printf("\n");
		printf("\n");
	}
	return 0;
}