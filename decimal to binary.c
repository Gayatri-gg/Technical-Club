//8.	Binary Conversion: Convert a decimal number to binary.

#include <stdio.h>

int j;
void convert(int n);

int main() 
{
    int n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("%d in decimal = ", n);
    convert(n);
    printf(" in binary");

    return 0;
}

void convert(int n) 
{
    int binary[32], i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) 
    {
        binary[i] = n % 2;  
        n /= 2;             
        i++;
    }

    
    for (j = i - 1; j >= 0; j--) 
    {
        printf("%d", binary[j]);
    }
}



/*
Enter a decimal number: 10
10 in decimal = 1010 in binary
*/
