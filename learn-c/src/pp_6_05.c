/*
 *Programming Project 1 in Chapter 4 asked you write a program that
 *displays a two-digit number with its digits reversed. Generalize the
 *program so that the number can have one, two, three, or more digits.
 *
 *Hint: Use a do loop that repeatedly divides the number by 10,
 *stopping when it reaches 0.
 *
 *date:24/02/2020
 *author:vgs
 *
 */

#include<stdio.h>

int main(void)
{
  int number;
  int modulus;
  int reversal;
  
  printf("Enter a number: ");
  scanf("%d", &number);

  reversal = 0;
  
  do {
    
    modulus = number % 10;
    reversal = reversal * 10 + modulus; // invierte cualquier entero
    number /= 10;

  } while ( number != 0);  // el entero de 0,8 es 0

  printf("The reversal number is: %d\n", reversal);
	
  return 0;
}
