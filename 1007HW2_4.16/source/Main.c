#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define high 10

//111360238
int main()
{
	int i, j, rows;
	int blank = 0;

	for (i = 0; i < high; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");
	for ( i = 10; i >0; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");
	for ( i = 10; i >=1; i--)
	{
		for (blank = 1; blank <= 10-i; blank++)
		{
			printf(" ");
		}
		for ( j = 1; j <=i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 1; i <= high; i++)
	{
		for (blank = 1; blank <= high-i; blank++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	
	return 0;
}