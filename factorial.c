//4.	Write C program to find factorial of given number . Take number from user. //

#include<stdio.h>

int main()
{
	int n,i;
	int fact=1;
	
	printf("Enter Any Number ");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("Negative Number factorial cannot find");
	}
	
	else
	{
		
		for( i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		printf("Factorial of %d is %d ",n,fact);
	}
	
	return 0;
}

/*
output -

Enter Any Number 4
Factorial of 4 is 24
*/
