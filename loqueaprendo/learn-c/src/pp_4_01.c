/*
 *Write a program that asks the user to enter a two-digit number, then prints
 *the number with its digits reversed. A session with the program should 
 *have the following appearance>
 *
 *Enter a two-digit number: 28
 *The reversal is: 82
 *
 *Read the nuimber using %d, then break it into two digits. Hint: If n is an
 *integer, then n % 10 is the last digit in n and n/10 is n with the last 
 *digit removed.
 *
 *date: 09/02/2020
 *author: vgs
 *
 */

#include<stdio.h>

int main(void)
{
  int number;
  int modulus;
  int cocient;
  
  printf("Enter a two-digit numnber: ");
  scanf("%d", &number);

  modulus = number % 10;
  cocient = number / 10;
  
  printf("The reversal is: %d%d\n", modulus, cocient);
	
  return 0;
}


