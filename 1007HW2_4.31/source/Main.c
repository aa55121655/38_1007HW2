#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//111360238
int j = 0;
int main() 
{	
	for (int i = 0; i <9; i++)
	{
		if (i == 0 || i == 8)
		{
			for (int a = 0; a < 9; a++)
			{
				if (a!=4)
				{
					printf("%s", " ");
				}
				else
				{
					printf("%s", "*");
				}
			}
			printf("\n");
		}
		else if (i == 1 || i == 7)
		{
			for (int a = 0; a < 9; a++)
			{
				if ((a == 4)|| (a == 3)|| (a == 5))
				{
					printf("%s", "*");
				}
				else
				{
					printf("%s", " ");
				}
			}
			printf("\n");
		}
		else if (i == 2 || i == 6)
		{
			for (int a = 0; a < 9; a++)
			{
				if ((a == 4) || (a == 3) || (a == 5) || (a == 2) || (a == 6))
				{
					printf("%s", "*");
				}
				else
				{
					printf("%s", " ");
				}
			}
			printf("\n");
		}
		else if (i == 3 || i == 5)
		{
			for (int a = 0; a < 9; a++)
			{
				if (a==0||a==8)
				{
					printf("%s", " ");
				}
				else
				{
					printf("%s", "*");
				}
			}
			printf("\n");
		}
		else
		{
			for (int a = 0; a < 9; a++) 
			{
				printf("%s", "*");
			}
			printf("\n");
		}
	}
	return 0;
}