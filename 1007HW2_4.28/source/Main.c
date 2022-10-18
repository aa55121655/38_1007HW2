#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

//111360238
int main()
{
	int Mode;

	double sum_counter;
	double pay; 
	double totalPay = 0;

	int countManagers = 0;
	int countHourlyWorkers = 0;
	int countCommissionWorkers = 0;
	int countPieceworkers = 0;

	double salary;
	double hourlyRate;
	double hoursWorked;
	double overtimeHours;
	double grossWeeklySales;
	double numberPieces;
	double wagePerPiece;

	

	do
	{
		printf("%s\n", "-----------------------------");
		puts("Select type of Employee from menu");
		puts("1. Manager/Salary");
		puts("2. Hourly Worker");
		puts("3. Commission Worker");
		puts("4. Pieceworker");
		printf("%s", "Enter paycode (-1 to end): ");
		scanf_s("%d", &Mode);
		printf("%s", "-----------------------------");
		switch (Mode)
		{
		// manager
		case 1:
			//��l��
			pay = salary = 0;
			//��J��T
			puts("");
			puts("Manager selected.");
			printf("%s", "Enter the yearly salary: $");
	
			scanf_s("%lf", &salary);
			pay = salary / 52;//�@�~��52�P
			printf("Manager's weekly pay is $%.2lf", pay);
			printf("\n%s", "-----------------------------");

			countManagers++;
			totalPay += pay;
			break;
		
		// hourly
		case 2:
			// ��l��
			pay = hourlyRate = hoursWorked = overtimeHours = 0; 
			//��J��T
			puts("");
			puts("Hourly worker selected.");
			printf("%s", "Enter the hourly rate: $");
			scanf_s("%lf", &hourlyRate);
			printf("%s", "Enter the total hours worked: ");
			scanf_s("%lf", &hoursWorked);
			
			//�P�_�[�Z�᪺�O��
			if (hoursWorked > 40)
			{
				overtimeHours = hoursWorked - 40; 
				hoursWorked = 40;
				
			}
			pay = (hourlyRate * hoursWorked) + (hourlyRate * overtimeHours * 1.5);
			//�p�G�S���]��if�̭��A�ƭȴN�|�]���W����l�ƹL�ӬO0�A�ҥH�N���ΦA�]else�]�S�[�Z���~��
			
			printf("Worker's pay this week is $%.2lf", pay);
			printf("\n%s","-----------------------------");
			
			//�H�Ƭ������`�~������
			countHourlyWorkers++; // update count
			totalPay += pay; // increase running total for all inputs
			break;

			// commission
		case 3:
			//��l��
			pay = grossWeeklySales = 0;
			
			//��J���
			puts("");
			puts("Commission worker selected.");
			printf("%s", "Enter the gross weekly sales: $");
			scanf_s("%lf", &grossWeeklySales);//���ӬP����X�`���B�A�]���O�⦨���[�W���~��

			//�p���~��
			pay = 250 + (grossWeeklySales *0.057 );
			printf("Worker's pay this week is $%.2lf", pay);
			printf("\n%s", "------------------------------");
			
			//�p��H�Ƥ��`�~������
			countCommissionWorkers++;
			totalPay += pay;
			break;

		// piecework
		case 4:
			//��l��
			pay = numberPieces = wagePerPiece = 0;

			//��J���
			puts("");
			puts("Pieceworker selected.");
			printf("%s", "Enter the number of pieces: ");
			scanf_s("%lf", &numberPieces);
			printf("%s", "Enter the wage per piece: $");
			scanf_s("%lf", &wagePerPiece);

			//�p��
			pay = numberPieces * wagePerPiece;
			printf("Worker's pay this week is $%.2lf", pay);
			printf("\n");
			
			//�p���~���M�H�Ƭ���
			countPieceworkers++;
			totalPay += pay;
			break;

		case -1:
			break;//-1����A�n�]case-1�N�O���F����J-1�ɥi�H�i�ӨåB���Xswitch�]���O��do while�A�p�G�S���]break�L�|�~�����
		
			//��J���b�]�w�����Ҧ�
		default:
			puts("Invalid Mode.");
			puts("please enter new Mode Code");
			break;
		}
	}
	while (Mode != -1);//������P�_

	//�]�X�j��óz�L�U���p�⧹��X�H�ƩM�I���`�~��
	sum_counter = countManagers + countHourlyWorkers + countCommissionWorkers + countPieceworkers;
	
	puts("");
	printf("Number of Employees:%22d\n",sum_counter);
	printf("Total number of managers paid:%12d\n", countManagers);
	printf("Total number of hourly workers paid:%6d\n", countHourlyWorkers);
	printf("Total number of commission workers paid:%2d\n", countCommissionWorkers);
	printf("Total number of pieceworkers paid:%8d\n", countPieceworkers);
	printf("Total value paid:\t\t\t$%.2lf\n", totalPay);
	return 0;
}