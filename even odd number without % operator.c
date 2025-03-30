//1.	Check if given num is even or odd without using % operator 

#include<stdio.h>

int main()
{
	int number=8;
	
	if((number/2)*2 == number)
		printf("%d is Even Number ",number);
	
	else
		printf("%d is Odd Number",number);
	
	return 0;
	
	
}

/*output-
8 is Even Number*/
