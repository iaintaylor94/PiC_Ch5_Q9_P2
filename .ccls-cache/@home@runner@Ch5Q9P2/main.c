/* Program to calculate the 200th triangular number, introduction to the for statement. */
/* Replace for with while */

#include <stdio.h>

int main(void) {

  int n, triangularNumber;

  triangularNumber = 0;

  n = 1;
  while (n <= 200) {
    triangularNumber = triangularNumber + n;
    n = n + 1;
  }

  printf ("The 200th triangular number is %i\n", triangularNumber);
  
  return 0;
}