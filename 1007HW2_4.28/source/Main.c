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
			//初始化
			pay = salary = 0;
			//輸入資訊
			puts("");
			puts("Manager selected.");
			printf("%s", "Enter the yearly salary: $");
	
			scanf_s("%lf", &salary);
			pay = salary / 52;//一年有52周
			printf("Manager's weekly pay is $%.2lf", pay);
			printf("\n%s", "-----------------------------");

			countManagers++;
			totalPay += pay;
			break;
		
		// hourly
		case 2:
			// 初始化
			pay = hourlyRate = hoursWorked = overtimeHours = 0; 
			//輸入資訊
			puts("");
			puts("Hourly worker selected.");
			printf("%s", "Enter the hourly rate: $");
			scanf_s("%lf", &hourlyRate);
			printf("%s", "Enter the total hours worked: ");
			scanf_s("%lf", &hoursWorked);
			
			//判斷加班後的費用
			if (hoursWorked > 40)
			{
				overtimeHours = hoursWorked - 40; 
				hoursWorked = 40;
				
			}
			pay = (hourlyRate * hoursWorked) + (hourlyRate * overtimeHours * 1.5);
			//如果沒有跑到if裡面，數值就會因為上面初始化過而是0，所以就不用再設else跑沒加班的薪水
			
			printf("Worker's pay this week is $%.2lf", pay);
			printf("\n%s","-----------------------------");
			
			//人數紀錄及總薪水紀錄
			countHourlyWorkers++; // update count
			totalPay += pay; // increase running total for all inputs
			break;

			// commission
		case 3:
			//初始化
			pay = grossWeeklySales = 0;
			
			//輸入資料
			puts("");
			puts("Commission worker selected.");
			printf("%s", "Enter the gross weekly sales: $");
			scanf_s("%lf", &grossWeeklySales);//那個星期賣出總金額，因為是抽成的加上基本薪水

			//計算薪水
			pay = 250 + (grossWeeklySales *0.057 );
			printf("Worker's pay this week is $%.2lf", pay);
			printf("\n%s", "------------------------------");
			
			//計算人數及總薪水紀錄
			countCommissionWorkers++;
			totalPay += pay;
			break;

		// piecework
		case 4:
			//初始化
			pay = numberPieces = wagePerPiece = 0;

			//輸入資料
			puts("");
			puts("Pieceworker selected.");
			printf("%s", "Enter the number of pieces: ");
			scanf_s("%lf", &numberPieces);
			printf("%s", "Enter the wage per piece: $");
			scanf_s("%lf", &wagePerPiece);

			//計算
			pay = numberPieces * wagePerPiece;
			printf("Worker's pay this week is $%.2lf", pay);
			printf("\n");
			
			//計算薪水和人數紀錄
			countPieceworkers++;
			totalPay += pay;
			break;

		case -1:
			break;//-1停止，要設case-1就是為了讓輸入-1時可以進來並且跳出switch因為是用do while，如果沒有設break他會繼續執行
		
			//輸入不在設定內的模式
		default:
			puts("Invalid Mode.");
			puts("please enter new Mode Code");
			break;
		}
	}
	while (Mode != -1);//先做後判斷

	//跑出迴圈並透過下面計算完輸出人數和付的總薪水
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