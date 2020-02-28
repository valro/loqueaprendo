/*
 *=====================================================================
 *name:pp_6_12.c
 *
 *The value of the mathematical constant e can be expressed as an 
 *infinte series:
 *e=1+1/1!+1/2!+1/3!+....=1/n!
 *
 *Modify Programming Project 11 so that the program continues adding 
 *terms until the current term becomes less than ε is a small 
 *(floating-point) number entered by the user.
 *
 *date:27/02/2020
 *author:vgs
 *
 *=====================================================================
 */
#include<stdio.h>

int main ( void ) {

  int i;
  float epsilon;
  float e_result, term, p;

  printf("\nEnter a floating-point number precission: ");
  scanf("%f", &epsilon);

  e_result = 1;

  printf("\ne = 1");

  for (i = 1;;i++) {
    // calculating the terms
    term = p = i;
    while ( p > 0 ) {
      if ( p - 1 == 0 ) break;
      term *= --p;

    }
    e_result += ( 1 / term );
    printf(" + 1/%d!", i);

    if ((1 / term) < epsilon)
      break;

  }

  printf(" = %.4f\n\n", e_result);

  return 0;
}
