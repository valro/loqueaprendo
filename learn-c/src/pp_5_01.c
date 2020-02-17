/*
 *Write a program that calculates how many digits a number contains:
 *
 *Enter a number: 374
 *The number 374 has 3 digits
 *
 *You assume that the number has no more than four digits. Hint: Use if 
 *statements to test the number. For example, if the number is between 0 
 *and 9, it has one digit. If the number is between 10 and 99, it has two
 *digits.
 *
 *date: 17/02/2020
 *author: vgs
 */

#include<stdio.h>

int main(void)  {
  int number, digits;

  printf("Enter a number: ");
  scanf("%3d", &number);

  if ( number < 10)
    digits = 1;
  else if ( number < 99)
    digits = 2;
  else
    digits = 3;

  printf("The number %d has %d digits\n", number, digits);


  return 0;

}
