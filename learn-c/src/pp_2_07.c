/* pp_2_07.c. This program asks the user to enter a U.S. dollar
 *amount and then shows how to pay that amount using the smaller
 *number of $20, $10, $5 and $1 bills:

 *Enter a dollar amount: 93

 *$20 bills: 4
 *$10 bills: 1
 * $5 bills: 0
 * $1 bills: 3

 *Date: 27/01/2020
*/

#include<stdio.h>

int main(void)
{
  int dollar_amount, bill20, bill10, bill5, bill1;

  printf("Enter a dollar amount: ");
  scanf("%d", &dollar_amount);

  bill20 = dollar_amount / 20;
  bill10 = (dollar_amount - bill20 * 20) / 10;
  bill5  = (dollar_amount - bill20 * 20 - bill10 * 10) / 5;
  bill1  = (dollar_amount - bill20 * 20 - bill10 * 10 - bill5 * 5);

  printf("\n$20 bills: %d\n", bill20);
  printf("$10 bills: %d\n", bill10);
  printf(" $5 bills: %d\n", bill5);
  printf(" $1 bills: %d\n", bill1); 
  
  return 0;
}
  

