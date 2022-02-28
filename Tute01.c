/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1, num2;
  printf("Enter num1 and num2>>> ");
  scanf("%d %d", &num1, &num2);
  const int total = num1 + num2;
  const float average = total / 2.0;
  printf("Average : %.2f\n", average);
  return 0;
}

