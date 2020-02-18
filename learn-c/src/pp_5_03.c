/* 
 *Modify the broker.c prgram of Section 5.2 by making both of the 
 *following changes:
 *(a) Ask the user to enter the number of shares and the price per 
 *    share, instead of the value of the trade.
 *(b) Add statements that compute the commission charged by a rival 
 *    broker ($33 plus 3¢ per share for fewer 2000 shares; $33 2¢ per 
 *    share for 2000 shares or more. Display the rival's commission as 
 *    as well as the commission charged by the original borker.
 *
 *Date: 18/02/20
 *author: vgs
 */
#include<stdio.h>

int main(void) {

  int shares;
  float price, value, commission, commission_rival;
  
  printf("Enter number of shares: ");
  scanf ("%d", &shares);
  printf("Enter the price per share: ");
  scanf("%f", &price);

  value = shares * price;

  if (value < 2500.00f)
    commission = 30.00f + 0.017f * value;
  else if  (value < 6250.00f )
    commission = 56.00f + 0.0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + 0.0034f * value;
  else if (value < 50000.00f )
    commission = 100.00f + 0.0022f * value;
  else if (value < 500000.00f)
    commission = 155.00f + 0.0011f * value;
  else
    commission = 255.00f + 0.0009f * value;

  if (commission < 39.00f)
    commission = 39.00f;

  if (shares < 2000)
    commission_rival = 33.00f + .03f * shares;
  else if (shares >= 2000)
    commission_rival = 33.00f + .02f * shares;

  printf("Shares: %d\n", shares);
  printf("Value: %.2f\n", value);
  printf("Commission: $%.2f\n", commission);
  printf("Rival Commission: $%.2f\n", commission_rival);
  
  return 0;
}
