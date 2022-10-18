#include <stdio.h>

//111360238
int main()
{
	int sum;
	int side1, side2, hypo;
	printf("%s%s%s\n", "Side1  ", "Side2   ", " hypotenuse");
	for (side1 = 1; side1 <= 500; side1++)
	{
		for (side2 = 1; side2 <= 500; side2++)
		{
			for (hypo = 1; hypo <= 500; hypo++)
			{
				sum = (side1 * side1) + (side2 * side2);
				if (sum == (hypo * hypo))
				{
					printf("%5d %5d%10d\n", side1, side2, hypo);
				}
			}
		}
	}
	return 0;
}