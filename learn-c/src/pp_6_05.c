/*
 *Programming Project 1 in Chapter 4 asked you write a program that
 *displays a two-digit number with its digits reversed. Generalize the
 *program so that the number can have one, two, three, or more digits.
 *
 *Hint: Use a do loop that repeatedly divides the number by 10, stopping 
 *when it reaches 0.
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
  int cocient;
  int reversal;
  
  printf("Enter a numnber: ");
  scanf("%d", &number);

  printf("The reversal is: ");

  do {

    modulus = number % 10;
    cocient = number / 10;

    printf("%d", modulus);

    number = cocient;
    
    if ( number < 10 )

      printf("%d\n", number);
    
  } while ( modulus != 0);


	
  return 0;
}
