/*
 *========================================================================================================== 
 *Write a program that prints a one-month calendar. The user specifies the number of days in the month and
 *the day of the week on which the month begins:
 *
 *Enter number of days in month: 31
 *Enter starting day of the week (1=Sun, 7=Sat): 3
 *
 *       1  2  3  4  5
 * 6  7  8  9 10 11 12
 *13 14 15 16 17 18 19  
 *20 21 22 23 24 25 26
 *27 28 29 30 31
 *
 *Hint: This program ins't as hard as looks. The most important part is for statement that uses a variable i
 *to count from 1 to n, where n is the number of days in teh month, printing each value of i. Inside the loop,
 *an if statement tests whether i is the last day in a week; if so, it prints a new-line character.
 *
 *date:26/02/2020
 *author:vgs
 *
 *==========================================================================================================
 */
#include<stdio.h>

int main(void) {

  int days_month, day_week;

  printf("Enter number of days in month: ");
  scanf("%2d", &days_month);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%1d", &day_week);

  printf("----------------------------\n");
  
  switch (day_week) {
  case 1:break;
  case 2:printf("    ");break;
  case 3:printf("        ");break;
  case 4:printf("            ");break;
  case 5:printf("                ");break;
  case 6:printf("                    ");break;
  case 7:printf("                        ");break;
  }

  for (int i = 1; i <= days_month; ++i) {

    if (day_week == 7) {
      printf("%4d\n", i);
      day_week = 1;
    }
    else {
      printf("%4d", i);
      day_week += 1;      
    }
    
  }
  printf("\n");
  printf("----------------------------\n");
  
  return 0;
}

