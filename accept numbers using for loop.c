//2.	Write a C program that uses a while loop to continuously ask the user to enter a number. The loop should terminate when the user enters a negative number

#include<stdio.h>

int main()

{
	int num;
	int i;
	//for(i<0;i<10;i++)
	while(1)
	{
		printf("\nEnter a number");
		scanf("%d",&num);
		
		//printf("Entered numbers are %d",num);
		
		if(num<0)
		{
			printf("You entered Negative Number");
			break;
			
		}
		
		
	}
	
	
	return 0;
	
}

/*Output -
Enter a number 9

Enter a number 7

Enter a number 8

Enter a number -5
You entered Negative Number

*/
