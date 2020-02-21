/*
 *Write a program that prompts the user to enter two dates and then
 *indicates which date comes earlier on the calendar:
 *
 *Enter first date (mm/dd/yy) : 3/6/08
 *Enter second date (mm/dd/yy) : 5/17/07
 *5/17/07 is earlir than 3/6/08
 *
 *date: 21/02/2020
 *author: vgs
 *
 */

#include<stdio.h>

int main(void)  {

  int first_day, first_month, first_year;
  int second_day, second_month, second_year;

  printf("Enter first date (mm/dd/yy) : ");
  scanf("%2d/%2d/%2d", &first_month, &first_day, &first_year);
  printf("Enter second date (mm/dd/yy) : ");
  scanf("%2d/%2d/%2d", &second_month, &second_day, &second_year);

  // If anidados
  
  if (first_year < second_year)
    printf("%d/%d/%d is earlier than %d/%d/%d\n", first_month, first_day, first_year, second_month, second_day, second_year);

  else if (first_year == second_year)

    if (first_month < second_month)
      printf("%d/%d/%d is earlier than %d/%d/%d\n", first_month, first_day, first_year, second_month, second_day, second_year);

    else if (first_month == second_month)

      if (first_day < second_day)
	printf("%d/%d/%d is earlier than %d/%d/%d\n", first_month, first_day, first_year, second_month, second_day, second_year);

      else
	printf("%d/%d/%d is earlier than %d/%d/%d\n", second_month, second_day, second_year, first_month, first_day, first_year);

    else
      printf("%d/%d/%d is earlier than %d/%d/%d\n", second_month, second_day, second_year, first_month, first_day, first_year);

  else
    printf("%d/%d/%d is earlier than %d/%d/%d\n", second_month, second_day, second_year, first_month, first_day, first_year);

  

  return 0;
}
