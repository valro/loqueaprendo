/*Rearrange the square3.c program so that the for loop initializes i, tests i, and increments i. 
 *Don't rewrite the program; in particular, don't use any multiplication.
 *
 *date:25/02/20
 *user:vgs
 *
 */
#include<stdio.h>

int main(void)  {

  int n;
  
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  
  printf("       Number   Squares  \n");

  for (int i = 1, square = 1, odd = 3; i <= n; ++i, odd +=2) {

    printf("%10d%10d\n", i, square);

    square += odd;
  }



  return 0;
}
