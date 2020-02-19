/*
 *Modify the upc.c program of Section 4.1 so that it checks whether a
 *UPC is valid. After the user enters a UPC, the program will display 
 *either VALID or NOT VALID.
 *
 *Date:19/02/2020
 *author: vgs
 *
 */

#include<stdio.h>

int main(void)
{
  int i1, i2, i3, i4, i5, i6, i7,i8, i9, i10, i11, i12,
    first_sum, second_sum, total, check;
  

  printf("Enter the upc: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&i12);

  first_sum = i1 + i3 + i5 + i7 + i9 + i11;
  second_sum = i2 + i4 + i6 + i8 + i10;
  total = 3 * first_sum + second_sum;
  check = 9 - ((total - 1) % 10);

  if (check == i12)
    printf("VALID\n"); 
  else
    printf("NOT VALID\n");

  return 0;
}
