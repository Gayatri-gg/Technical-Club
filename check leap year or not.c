//6.	Leap Year: Determine if a given year is a leap year.

#include<stdio.h>

int main()
{
	int year;
	
	printf("Enter a Year: ");
	scanf("%d",&year);
	
	if(year%400==0)
	{
		printf("\n%d is a leap year",year);	
	}
	else if(year%100==0)
	{
		printf("\n%d is not a leap year",year);	
	}
	else if(year%4==0)
	{
		printf("\n%d is a leap year",year);	
	}
	else
	{
		
		printf("\n%d is not a leap year",year);	
	}
	return 0;
}

/*
output -
Enter a Year: 2025

2025 is not a leap year
*/
