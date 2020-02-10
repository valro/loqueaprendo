/*
 *Rewrite the program in Programming Project 2 so that it prints the reversal 
 *of a three-digit number without using arithmetic to split the number into
 *digits. Hint: See upc.c program of Section 4.1
 *
 *date: 10/02/20
 *author: vgs
 *
 */

#include<stdio.h>

int main(void)

{
  int i, j, k;

  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &i, &j, &k);

  printf("The reversal number is: %d%d%d\n", k, j, i);

  return 0;
}
