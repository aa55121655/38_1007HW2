#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include <stdlib.h>
//111360238

int length , breadth, stars;
int a, b, c;
int main() 
{
	while (true)
	{
		printf("What is your rectangle length?:");
		scanf_s("%d", &length);
		printf("What is your rectangle breadth?:");
		scanf("%d", &breadth);
		if ((breadth ==0 || length==0)||(breadth ==-1 || length==-1) )
		{
			break;
		}
		else
		{
			for (int i = 0; i < length; i++)
			{
				if (i == 0 || i == length - 1)
				{
					for (int j = 0; j < breadth; j++)
					{
						printf("+");
					}
					printf("\n");
				}
				else
				{
					for (int j = 0; j < breadth; j++)
					{
						if (j == 0 || j == breadth - 1)
						{
							printf("+");
						}
						else
						{
							printf(" ");
						}
					}
					printf("\n");
				}
			}
			printf("\n");
		}
	}
	return 0;
}