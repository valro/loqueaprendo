/*
 *Write a program that asks the user to enter a fraction, then reduces
 *the fraction to lowest terms:
 *
 *Enter a fraction: 6/12
 *In lowest terms: 1/2
 *
 *Hint: To reduce a fraction to lowest tewrms, first compute GCD of the 
 *numerator and denominator. Then divide both the numerator and 
 *denominator by the GCD.
 *
 *date:24/02/2020
 *author:vgs
 *
 */
#include<stdio.h>

int main(void)  {

  int i, numerator, denominator, gcd;

  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denominator);

  if (numerator == 0 || denominator == 0) {
    printf("Both numbers should be greater than 0\n");
    return 1;
   }

  for ( i = 1; i <= numerator && i <= denominator; ++i) {
    // Checks if i is factor of the two integers
    if ( numerator % i && denominator % i )
      gcd = i;

  }
  printf("In lowest terms: %d/%d\n", numerator/gcd,denominator/gcd);
  
  return 0;
}
