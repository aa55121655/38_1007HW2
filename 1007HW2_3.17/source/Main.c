#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdbool.h>
//111360238
int AccountNumber;
float BeginningBalance, TotalCharges, TotalCredits, CreditLimit, AccountBalance;
int main() 
{
	while (true) {
		printf("Enter account number ( -1 to end ): ");
		scanf_s("%d", &AccountNumber);
		if (AccountNumber == -1) 
		{
			break;
		}

		printf("Enter beginning balance: ");
		scanf_s("%f", &BeginningBalance);
		printf("Enter total charges: ");
		scanf_s("%f", &TotalCharges);
		printf("Enter total credits: ");
		scanf_s("%f", &TotalCredits);
		printf("Enter credit limit: ");
		scanf_s("%f", &CreditLimit);
		printf("\n");

		AccountBalance = BeginningBalance + TotalCharges - TotalCredits;

		if (AccountBalance > CreditLimit) {
			printf("Account:\t%d\n", AccountNumber);
			printf("Credit limit:\t%.2f\n", CreditLimit);
			printf("Balance:\t%.2f\n", AccountBalance);
			printf("Credit limit exceeded.\n");
			printf("\n");
		}
	}
	return 0;
}