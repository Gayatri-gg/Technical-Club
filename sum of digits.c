//9.	Sum of Digits: Input a number, calculate the sum of its digits.

#include<stdio.h>

int main()
{
	int n,rem=0,sum=0;
	
	printf("Enter any Number");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem= n%10;
		sum=sum+rem;
		n=n/10;
	}
	
	printf("Sum of Digits are :%d",sum);
	return 0;
	
}


/*

output-
Enter any Number 7654
Sum of Digits are :22

*/
