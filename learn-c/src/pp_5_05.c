/*
 *In one state, single residents are subject to the following income tax:
 *Income             Amount of tax
 *Not over $750      1% of income
 *$750-$2,250        $7.50     plus 2% of amount over $750
 *$2,250-$3,750      $37.50    plus 3% of amount over $2,250
 *$3,750-$5,250      $82.50    plus 4% of amount over $3,750
 *$5,250-$7,000      $142.50   plus 5% of amount over $5,250
 *over $7,000        $230.00   plus 6% of amount over $7,000
 *
 *Write a program that asks the user to enter the amount of taxable 
 *income, then displays the tax due.
 *
 *Date: 18/02/20
 *author: vgs
 *
 */

#include<stdio.h>

int main(void) {

  float income;

  printf("Enter amount of taxable income: ");
  scanf("%f", &income);

  if (income < 750)
    printf("Tax due: $%.2f\n", income * 0.01);
  else if (income >= 750 && income <= 2250)
    printf("Tax due: $%.2f\n", (7.50 + (income - 750) * 0.02));
  else if (income >= 2250 && income <= 3750)
    printf("Tax due: $%.2f\n", (37.50 + (income - 2250) * 0.03));
  else if (income >= 3750 && income <= 5250)
    printf("Tax due: $%.2f\n", (82.50 + (income - 3750) * 0.04));
  else if (income >= 5250 && income <= 7000)
    printf("Tax due: $%.2f\n", (142.50 + (income - 5250) * 0.05));
  else if (income > 7000)
    printf("Tax due: $%.2f\n", (230.00 + (income - 7000) * 0.06));
  
  return 0;
}
