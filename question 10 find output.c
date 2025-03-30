//10.	Question: What will be the output of this code snippet? Explain the behavior of the pre-increment and post-decrement operators.
#include <stdio.h>

int main() {
  int x = 5, y = 10;
  printf("%d %d\n", ++x, y--);
  printf("%d %d\n", x, y);
  return 0;
}

/*output - 6 10
         6  9

In this above example , ++x is pre-increment It firstly increment the value of x then print and y-- is a post-decrement means firtly print value of y then decrement its value		
*/ 
