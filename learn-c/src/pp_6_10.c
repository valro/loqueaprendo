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
  int day, month, year;
  int min_day, min_month, min_year;

  // Introducir dos fechas y extraer la mas temprana
  
  printf("Enter a date (mm/dd/yy) : ");
  scanf("%d/%d/%2d", &first_month, &first_day, &first_year);

  for (;;) {

  printf("Enter a date (mm/dd/yy) : ");
  scanf("%d/%d/%2d", &month, &day, &year);

  if ( month == 0 && day == 0 && year == 0 )
    break;

  if ( first_year < year ) {         
    // la fecha introducida en primer lugar es anterior a la actual
    min_year = first_year; min_month = first_month; min_day = first_day;
  }
  else if ( first_year == year ) {
    if ( first_month < month ) {
      min_year = first_year; min_month = first_month; min_day = first_day;
    }
    else if ( first_month == month ) {
      if ( first_day < day ) {
	min_year = first_year; min_month = first_month; min_day = first_day;
      }
      else if ( first_day == day ) {
	// Se trata de la primera fecha introducida dos veces. Se toma la primera por facilidad
	min_year = first_year; min_month = first_month; min_day = first_day;
      }
      else {
	// day < first_day
	min_year = year; min_month = month; min_day =  day;
	
      }
 
    }
    else {
      // month < first_month
      min_year = year; min_month = month; min_day =  day;
    }
  }

  else {
    // year < first_year
    min_year = year; min_month = month; min_day =  day;
  }
  //  printf("min_month: %d min_day: %d min_year: %2d\n", min_month, min_day, min_year);
  first_year = min_year; first_month = min_month; first_day = min_day;
  }

  printf("The date %d/%d/%.2d is the earliest date introduced\n", min_month, min_day, min_year);
  
  return 0;
}

