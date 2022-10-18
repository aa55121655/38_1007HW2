#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//111360238
double principal = 5000.0;
double rate;
double amount = 0;
unsigned int years;

int main()
{
	for (rate = 10; rate <= 12; rate=rate+0.5)
	{

		printf("%4s%21s%1s%.2f%2s\n", "Year", "Amount on deposit","(",rate,"%)");

		for (years = 1; years <= 15; ++years) 
		{

			amount = principal * pow(1.0 + (rate / 100.0), years);
			printf("%3u%18.2f\n", years, amount);
		}
		printf("\n");
	}
	return 0;
}