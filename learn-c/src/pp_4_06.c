/*
 *European countries use a 13-digit code, known as a European Article Number 
 * (EAN) instead of the 12-digit Universal Product Code (UPC) found in North
 *America. Each EAN ends with a check digit, just as a UPC does. The
 *technique for calculating the check digit is also similar:
 *
 *   Add the second, fourth, sixth, eighth, tenth, and twelfth digits,
 *   Add the first, third, fifth, seventh, ninth, and eleventh digits.
 *   Multiply the first sum by 3 and add it to the second sum.
 *   Substract 1 from the total.
 *   Compute the remainder from 9.
 *
 *For example, consider Güllüoglu Turkish Delight Pistachio & Coconut, which 
 *has an EAN of 86914842600008. The first sum is 6 + 1 + 8 + 2 + 0 + 0 = 17 
 *, and the econd sum is 8 + 9 + 4 + 4 + 6 + 0 = 31. Multiplying the first  
 *sum by 3 and adding the second yields 82. Substracting 1 gives 81. The 
 *remainder is subtracted from 9, the result is 8, which matches the last 
 *digit of the original code. Your job is to modify the upc.c program of
 *Section 4.1 so that it calculates the check digit for an EAN. The user 
 *will enter the first 12 digits of EAN as a single number:
 *
 *Enter the first 12 digits of an EAN: 8698148426000
 *Check digit: 8
 *
 */

#include<stdio.h>

int main(void)
{
  int i0, i1, i2, i3,
    i4, i5, i6, i7, i8, i9, i10, i11, i12,
    first_sum, second_sum, total, check;

  printf("Enter first 12 digits of an EAN: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	&i0,&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11);

  printf("Numero: %d%d%d%d%d%d%d%d%d%d%d%d\n", i0, i1, i2, i3,
	 i4, i5, i6, i7, i8, i9, i10, i11);
  
  first_sum = i1 + i3 + i5 + i7 + i9 + i11;
  second_sum = i0 + i2 + i4 + i6 + i8 + i10;
  
  total = 3 * first_sum + second_sum;

  check = (9 - (total - 1) % 10);

  printf("%d %d %d %d %d %d\n", i0, i2 , i4 , i6 , i8 , i10);
  printf("%d %d %d %d %d %d\n", i1 , i3 , i5 , i7 , i9 , i11);
  printf("------------------\n");
  printf("first_sum = %d\n", first_sum);
  printf("second_sum = %d\n", second_sum);
  
  printf("Check digit: %1d\n", check);
  
  return 0;
}
