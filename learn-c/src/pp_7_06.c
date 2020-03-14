/* Write a program that prints the values of sizeof(int), sizeof(short),
 * sizeof(long), sizeof(float), sizeof(double) and sizeof(long double).
 * date: 13/03/2020
 * author: vgs
 */

#include<stdio.h>

int main(void) {

  printf("\nSize of int:         %2d bytes\n", sizeof(int));
  printf("Size of short:       %2d bytes\n", sizeof(short));
  printf("Size of long:        %2d bytes\n", sizeof(long));
  printf("Size of float:       %2d bytes\n", sizeof(float));
  printf("Size of double:      %2d bytes\n", sizeof(double));
  printf("Size of long double: %2d bytes\n", sizeof(long double));

  return 0;
}
