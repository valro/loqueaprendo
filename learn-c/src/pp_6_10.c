/*
 *Programming Project 9 in Chapter 5 asked you to write a program that determines which of two dates 
 *comes earlier on the calendar. Generalize the program so that the user may enter any number of 
 *dates. The user wil enter 0/0/0 to indicate that no more dates will be entered.
 * 
 *Enter a date (mm/dd/yy): 3/6/08
 *Enter a date (mm/dd/yy): 5/17/07
 *Enter a date (mm/dd/yy): 6/3/07
 *Enter a date (mm/dd/yy): 0/0/0
 *
 *5/17/07 is the earliest date.
 *
 *date:26/02/2020
 *author:vgs
 *
 *===============================================================================
*/
#include<stdio.h>

int main(void) {
  int first_day, first_month, first_year;
  int second_day, second_month, second_year;
  int day, month, year;
  int min_day, min_mont, min_year;

  // Introducir dos fechas y extraer la mas temprana
  
  printf("Enter a date (mm/dd/yy) : ");
  scanf("%2d/%2d/%2d", &first_month, &first_day, &first_year);
  printf("Enter a date (mm/dd/yy) : ");
  scanf("%2d/%2d/%2d", &second_month, &second_day, &second_year);

  
  // If anidados
  
  if (first_year < second_year)
    min_month = first_month; min_day = first_day; min_year = first_year;

  else if (first_year == second_year)

    if (first_month < second_month)
      min_month = first_month; min_day = first_day; min_year = first_year;

    else if (first_month == second_month)

      if (first_day < second_day)
	min_month = first_month; min_day = first_day; min_year = first_year;

      else
	min_month = second_month; min_day = second_day; min_year = second_year;
  
      else
	min_month = second_month; min_day = second_day; min_year = second_year;
    
  for (;;) {
    

  }
  
  return 0;
}

