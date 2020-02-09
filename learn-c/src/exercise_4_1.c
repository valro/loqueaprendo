/*
 *Show the output produced by each of the following program fragments,
 *Assume that i, j and k are int variables.
 *(a) i = 5; j = 3
 *printf("%d %d\n", i / j, i % j); ==> 5 / 3 = 1; 5 % 3 = 2
 *(b) i = 2; j = 3;
 *printf("%d", (i + 10) % j);    ==> 12 % 3 = 0;
 *(c) i = 7; j = 8; k = 9;
 *printf("%d", (i + 10) % k / j);==> 17 % 9 / 8 -> 8 / 8 -> 1
 *(d) i = 1; j = 2; k = 3;
 *printf("%d", (i + 5) % (j + 2) / k); 6 % 4 / 3 -> 0
 *
 */

#include<stdio.h>

int main(void)
{
  int i, j, k;

  // (a)

  i = 5;
  j = 3;
  
  printf("%d %d\n", i / j, i % j);

  // (b)

  i = 2;
  j = 3;

  printf("%d\n", (i + 10) % j);

  // (c)

  i = 7;
  j = 8;
  k = 9;

  printf("%d\n", (i + 10) % k / j);

  // (d)
  
  i = 1; j = 2; k = 3;

  printf("%d\n", (i + 5) % (j + 2) / k);
  
  return 0;
}
