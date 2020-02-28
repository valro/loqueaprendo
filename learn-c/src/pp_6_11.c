/*
 *=====================================================================
 *name:pp_6_11.c
 *
 *The value of the mathematical constant e can be expressed as an 
 *infinte series:
 *e=1+1/1!+1/2!+1/3!+....=1/n!
 *
 *Write a program that aproximates e by computing the value of
 *e=1+1/1!+1/2!+1/3!+....=1/n!
 *where n is an integer entered by the user.
 *date:27/02/2020
 *author:vgs
 *
 *=====================================================================
 */

#include<stdio.h>

int main (void)  {
  
  float e, term;
  int t, n;

  printf("Enter the value of n: ");
  scanf("%d", &n);
  
  if ( n == 0 )
    return 1;

  e = 1;
  term = 1;

  for ( t = 1; t <= n; t++ ) {

    term /= t;
    e += term;
    
  }
  printf("El valor de e para %d terminos es: %.15f\n", n, e);
  
  return 0;
}
