/*
 *Write a program that asks the user to enter two integers, then 
 *calculates and displays their greatest common divisor (GCD):
 *
 *Enter two integers: 12 28
 *Greatest common divisor: 4
 *
 *Hint: The classic algorith for computing the GCD, known as Euclid's 
 *algorithm, goes as follows: Let m nad n variables containing the two
 *numbers. If n is 0, then stop: m contains the GCD. Otherwise, compute
 *the remainder when m is divided by n. Copy n into m and copy the 
 *remainder into n. The repeat the process, starting with testing wheter
 *n is 0.
 *
 *date:24/02/2020
 *author:vgs
 *
 */

#include<stdio.h>

int main(void)  {

  int i, n, m, gcd;
  
  printf("Enter two integers: ");
  scanf("%d %d", &n, &m);
  if ( n == 0 ) 
   gcd = m;

  if ( m == 0 ) 
   gcd = n;

  for (i = 1; i <= n && i <= m; ++i) {

    // Check if i is factor of the two integers

    if ( n % i == 0 && m % i == 0 )
      gcd = i;
  }

  printf("Greatest common divisor: %d\n", gcd);

  
  return 0;
}
