//3.	Fibonacci Sequence: Generate the first 'n' Fibonacci numbers.

#include <stdio.h>
int main() {

  int i, n;

 
  int n1 = 0, n2 = 1;

  
  int n3 = n1 + n2;


  printf("How many numbers you want : ");
  scanf("%d", &n);


  printf("Fibonacci Series: %d, %d, ", n1, n2);

  
  for (i = 3; i <= n; ++i) {
    printf("%d, ", n3);
    
    n1 = n2;
    n2 = n3;
    n3 = n1 + n2;
  }

  return 0;
}

/*
output-
How many numbers you want : 5
Fibonacci Series: 0, 1, 1, 2, 3,
*/

