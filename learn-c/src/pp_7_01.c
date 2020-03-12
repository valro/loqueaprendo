/*
 * pp_7_01.c
 * The square2.c program of Section 6.3 will fail  (usually printing strange answers) if i * i
 * exceeds   the maximun int value. Run the program and determine the smallest value of n that causes
 * failure. Try changing the type of i to short and running the program again. (Don't forget to update
 * the conversion specifications in the call of printf!) Then try long. From these experiments, what
 * can you conclude about the number of bits used integer types on your machine?.
 * 
 * date: 09/03/2020
 * author: vgs
*
*/

#include<stdio.h>
#include<limits.h>
#include<time.h>          // for clock_t, clock(), CLOCKS_PER_SEC

int main(void)  {

  // to store execution time of code
  double time_spent = 0.0;

  long i;
  //short i;
  //long i, n;

  printf("\nThis program prints a table of squares. \n");
  //printf("Enter a number of entries in table: ");
  //scanf("%ld", &n);

  i = 1;
  
  //while ( i * i > 0 && i * i < SHRT_MAX)
  //while ( i * i > 0 && i * i < LONG_MAX)
  //while ( i * i > 0 && i * i < INT_MAX)

  // main function to find the execution time of a C program
  clock_t begin = clock();
  
  while ( i * i > 0 && i * i < LONG_MAX)
  {
     printf("%10ld %10ld\n", i, i * i);
     i += 1;
   }

  clock_t end = clock();

  // calculate elapsed time by finding difference (end - begin) and
  // dividing the difference by CLOCKS_PER_SEC to convert to seconds
  time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

  printf("Time elpased is %f seconds", time_spent);  
  printf("\nThe maximum value is %ld", i);

  return 0;


}

/* Answer:
 * Smallest value of n that causes failure for int: 46340
 * Smallest value for short: 181
 * Smallest value for long: 46340
 *
 * Conclusion: Both int and long use 32 bits on my machine, except that since
 * they're signed, it's actually only 31 bits.
 */
 
