/*
 *Write a program that ask the user to enter the numbers from 1 to 16 (in any
 *order) and then display the numbers in a 4 arrangement, followed by de sums 
 *of the rows, columns and diagonals.
 *
 *Enter the numbers from 1 to 16 in any order:
 *16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
 *
 *16   3   2   13
 * 5  10  11    8
 * 9   6   7   12
 * 4  15  14    1
 *
 *Row sums: 34 34 34 34
 *Column sums: 34 34 34 34
 *Diagonal sums: 34 34

 *If the row, column, and diagonal sums are all the same (as they are in this 
 *example), the numbers are said to form a "magic square". The magic square 
 *shown here appears in a 1514 engraving by artist and mathematician Albrech
 *Durer. (Note that the middle numbers in the last row give the date of the 
 *engraving.)
 *
 */
#include<stdio.h>

int main(void)
{
  int a11, a12, a13, a14;
  int a21, a22, a23, a24;
  int a31, a32, a33, a34;
  int a41, a42, a43, a44;

  printf("Enter the numbers from 1 to 16 in any order: ");
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a11, &a12, &a13, &a14, &a21, &a22, &a23, &a24, &a31, &a32, &a33, &a34, &a41, &a42, &a43, &a44);
  printf("\n");

  // print matrix
  printf("Your numbers in a magic matrix form: \n");
  printf("%5d%5d%5d%5d\n%5d%5d%5d%5d\n%5d%5d%5d%5d\n%5d%5d%5d%5d\n", a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44); 
  printf("\n");
  
  printf("Row sums: \t%5d%5d%5d%5d\n", a11+a12+a13+a14, a21+a22+a23+a24, a31+a32+a33+a34, a41+a42+a43+a44);
  
  printf("Column sums: \t%5d%5d%5d%5d\n", a11+a21+a31+a41, a12+a22+a32+a42, a13+a23+a33+a43, a14+a24+a34+a44); 

  printf("Diagonal sums: \t%5d%5d\n", a11+a22+a33+a44, a14+a23+a32+a41);
  printf("\n");
  
  return 0;
}

