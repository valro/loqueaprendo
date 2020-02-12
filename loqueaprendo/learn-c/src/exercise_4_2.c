/*
 *If i and j are positive integers, does (-i)/j always have the same value
 *as -(i/j)?. Justify your answer.
 *Sí porque con el standard C89 el cociente toma el signo del denominador
 *con el standard C99 sería el cociente cambiando de signo. 
 *
 */

#include<stdio.h>

int main(void)

{
  int i, j;
  
  i = 8; j = 2;
    
  printf("%d\n", - i / j);
  printf("%d\n", - (i / j));
	 
  return 0;
}
