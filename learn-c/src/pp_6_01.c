/* 
 *Write a program that finds the largest in a series of numbers entered
 *by the user. The program must prompt the user to enter numbers one by
 *one. When the user enters 0 or a negative number, the program must
 *display the largets nonnegative number entered:
 *
 *Enter a number: 60
 *Enter a number: 38.3
 *Enter a number: 4.89
 *Enter a number: 100.62
 *Enter a number: 75.2295
 *Enter a number: 0
 *
 *The largest number entered was 100.62
 *
 *Notice that the numbers aren't necessarily integers.
 *
 *date: 24/02/2020
 *author: vgs
 *
 */

#include<stdio.h>

int main(void) {

  float number, largest;

  largest = 0;
  number = 1;
  
  for (;number > 0;) {

    printf("Enter a number: ");
    scanf("%f", &number);

    if (number > largest)
      largest = number;

  }

  printf("The largest number entered was: %.2f\n", largest);
  
  return 0;
}
