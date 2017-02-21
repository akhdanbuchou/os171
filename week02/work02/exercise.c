/*
 * Name	: Muhammad Akhdan Shidqi
 * NPM  : 1506689295
 * Class: OS-A
 * Comment : Simple code exercise
 */

#include <stdio.h>

void main() {
  int input1, input2, i;
  int product = 0;

  printf("Enter first integer:\n");
  scanf("%d", &input1);
  printf("Enter second integer:\n");
  scanf("%d", &input2);

  for(i=0; i< input2; i++) {
    product  = product + input1;
  }
  printf("%d times %d equals %d\n", input1, input2, product);
}
