/*
 *Rewrite the upc.c program of Section 4.1 so that the user enters 11 digits 
 *at one time, instead of entering one digit, then five digits, then another 
 *five digits.
 *
 *Enter the first 11 digits of a UPC: 01380015173
 *Check digit: 5
 *
 *date:10/02/2020
 *author: vgs
 *
 */
 
#include<stdio.h>

int main(void)
{
  int number, quotient, i1, i2, i3,
    i4, i5, i6, i7, i8, i9, i10, i11,
    first_sum, second_sum, total, check;

  printf("Enter first 11 digits of a UPC: ");
  scanf("%11d", &number);

  i11 = number % 10;
  quotient = number / 10;
  i10 = quotient % 10;
  quotient = quotient / 10;
  i9 = quotient % 10;
  quotient = quotient / 10;
  i8 = quotient % 10;
  quotient = quotient / 10;
  i7 = quotient % 10;
  quotient = quotient / 10;
  i6 = quotient % 10;
  quotient = quotient / 10;
  i5 = quotient % 10;
  quotient = quotient / 10;
  i4 = quotient % 10;
  quotient = quotient / 10;
  i3 = quotient % 10;
  quotient = quotient / 10;
  i2 = quotient % 10;
  quotient = quotient / 10;
  i1 = quotient % 10;

  first_sum = i1 + i3 + i5 + i7 + i9 + i11;
  second_sum = i2 + i4 + i6 + i8 + i10;
  total = 3 * first_sum + second_sum;

  check = (9 - (total - 1) % 10);

  printf("%d %d %d %d %d %d\n", i1 , i3 , i5 , i7 , i9 , i11);
  printf("%d %d %d %d %d\n", i2 , i4 , i6 , i8 , i10);
  printf("------------------\n");
  printf("first_sum = %d\n", first_sum);
  printf("second_sum = %d\n", second_sum);
  
  printf("Check digit: %1d\n", check);

  

  return 0;
}
