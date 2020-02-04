/*
 *Write a program that formats product information entered by the user.
 *A session with the program should look like this:
 *Enter item number: 583
 *Enter unit price: 13.5
 *Enter purchase date: (mm/dd/yyyy): 10/24/2010
 *Item        Unit        Purchase
 *            Price       Date
 *583         $  13.50    10/24/2010
 *
 *The item number and date should be left justified; the unit price should be right justifed.
 *Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.
 *date: 28/01/2020
 *author: vgs
 */
#include<stdio.h>

int main(void)
{
  int day, month, year;            // variables for the date
  int item;                        // item number
  float price;

  printf("Enter item number: ");
  scanf("%d", &item);
  printf("Enter unit price: ");
  scanf("%f", &price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
  printf("%-d\t$%.2f\t%.2d/%.2d/%4d\n",item,price,month,day,year);
  

  return 0;
}
