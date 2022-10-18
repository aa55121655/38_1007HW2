#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
float sales, commission, earn;
//111360238
int main() 
{

	while (true) {
		printf("Enter sales in dollars ( -1 to end ): ");
		scanf_s("%f", &sales);
		if (sales == -1) 
		{
			break;
		}
		commission = sales / 100 * 9;
		earn = commission + 200;
		printf("Salary is %.2f\n", earn);
		printf("\n");
	}
	return 0;
}