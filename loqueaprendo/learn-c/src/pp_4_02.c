/*
 *Extend the program in Programming Project 1 to handle three-digits 
 *numbers*
 *Date: 10/02/2020
 *author: vgs
 *
 */

#include<stdio.h>

int main(void)
{
  int number, quotient1,quotient2,modulus1,modulus2;

  printf("Enter a three-digit number: ");
  scanf("%3d", &number);

  modulus1 = number % 10;
  quotient1 = number / 10;
  modulus2 = quotient1 % 10;
  quotient2 = quotient1 / 10;
 
  printf("The reversal is: %d%d%d\n", modulus1, modulus2, quotient2);
    

  return 0;
}
