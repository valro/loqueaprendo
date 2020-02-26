/*
*===============================================================================
*Progamming Project 8 in Chapter 2 asked you to write a program that calculates the remaining balance
*on a loan after the first, second, and third montly payments. Modify the program so that it also asks
*the user to enter the number of payments and then displays the balance remaining after each of these
*payments.
*
*date:26/02/2020
*author:vgs
*
*===============================================================================
*/

#include<stdio.h>

int main(void)  {

  int loan, number_payments;
  float rate, monthly, inter, bal;

  printf("--------------------------------------------------------------------------------\n");
  
  printf("Enter amount of loan: ");
  scanf("%d", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly);
  printf("Enter the number of payments: ");
  scanf("%d", &number_payments);

  printf("--------------------------------------------------------------------------------\n");
	 
  for (int i = 1; i <= number_payments; ++i) {

    inter = (loan * rate) / 1200;
    bal = loan - (monthly - inter);

    printf("Balance remaining after payment %2d: %.2f\n", i , bal);

    loan = bal;
    
  }

  printf("--------------------------------------------------------------------------------\n");
	 
  return 0;
}

