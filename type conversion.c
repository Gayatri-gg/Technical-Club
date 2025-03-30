//11.	What will be the output of this code snippet? Explain the type conversion that occurs.

#include <stdio.h>

int main() {
  float f = 3.5;
  int i = (int)f;
  printf("%d %f\n", i, f);
  return 0;
}

/*
output - 3 3.500000

In this example, (int)f it converts float f value into integer it only prints integer part only  it is called as 'Explicit Conversion' and %f prints floating value */
