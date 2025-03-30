//7.	Armstrong Number: Check if a number is an Armstrong number.

#include<stdio.h>

int main()
{
	int num, original_num, rem,sum=0;

	printf("Enter a number : ");
	scanf("%d",&num);
	
	original_num=num;
	
	while(num!=0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	
	if(sum==original_num)
	{
		printf("%d is Armstrong number",original_num);
	}

	else
	{
		printf("%d is not Armstrong number ",original_num);
	}
	return 0;
}

/*
output-

Enter a number : 153
153 is Armstrong number

*/
