//5.	Simple Calculator: Implement basic arithmetic operations (+, -, *, /) based on user input.

#include<stdio.h>

int main()

{
	int a,b,ch;
	
	printf("Simple Calculator :\n\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	
	printf("\nEnter first number :");
	scanf("%d",&a);
	
	printf("\nEnter second number :");
	scanf("%d",&b);
	
	
	printf("\nWhich operation do you want to perform? ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("\nAddition of %d and %d is %d",a,b,a+b);
			break;
		
		case 2:
			printf("\nSubtraction of %d and %d is %d",a,b,a-b);
			break;
			
		case 3:
			printf("\nMultiplication of %d and %d is %d",a,b,a*b);
			break;
			
		case 4:
			printf("\nDivision of %d and %d is %d",a,b,a/b);
			break;
			
		default:
			printf("\nInvalid Operation");
			break;
		
		
		
	}
	
	return 0;
		
}

/*
output-

Simple Calculator :

1.Addition
2.Subtraction
3.Multiplication
4.Division

Enter first number :7

Enter second number :8

Which operation do you want to perform? 3

Multiplication of 7 and 8 is 56

*/
