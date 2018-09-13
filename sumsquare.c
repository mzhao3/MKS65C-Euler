//Maggie Zhao
//Systems Pd10
//
//INSTRUCTIONS:
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <stdio.h>

int main(void) {
  int i;
  int sum = 0;
  int sumsquare = 0;
  for (int i = 1; i <= 100; i++) {
    sum += i;
    sumsquare += i*i;
  }
  int diff = 0;
  diff = (sum * sum) - sumsquare;
  printf("%d\n", diff);
  return 0;
}
