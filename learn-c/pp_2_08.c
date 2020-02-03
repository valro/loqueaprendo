/* pp_2_008.c. Este programa calcula las cantidades que quedan pendientes de un capital prestado a un tipo de intereses anual ingresando una cantidad fija mensual en concepto de intereses y amortizacion.

Enter amount of loan: 20000
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after the first payment: 
Balance remaining after the second payment: 
Balance remaining after the third payment:

Date: 27/01/2020 
author: Valentín Gallego
*/

#include<stdio.h>

int main(void)

{
  int loan;
  float rate, monthly, inter1, inter2, inter3, bal1, bal2, bal3;
  
  printf("Enter amount of loan: ");
  scanf("%d", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly);

  inter1 = (loan * rate) / 1200;
  bal1 = loan - (monthly - inter1);
  inter2 = (bal1 * rate) / 1200;
  bal2 = bal1 - (monthly - inter2);
  inter3 = (bal2 * rate) / 1200;
  bal3 = bal2 - (monthly - inter3);

  printf("\n");    // print a blank line
  puts("");        // print another blank line
  
  printf("Balance remaining after the first payment : %.2f\n", bal1);
  printf("Balance remaining after the second payment: %.2f\n", bal2);
  printf("Balance remaining after the third payment : %.2f\n", bal3);
  

  return 0;
}



  
 
