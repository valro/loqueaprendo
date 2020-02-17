/*
 *Write a program that asks the user for 24-hour time, then displays the time
 *in 12-hour form
 *
 *Enter a 24-hour time: 21:11
 *Equivalent 12-hour time: 9:11 PM
 *
 *Be careful not to display 12:00 as 0:00
 *
 *Date: 17/02/2020
 *author: vgs
 *
 */
#include<stdio.h>

int main ( void ) {

  int hour, min;
  
  printf ("Enter a 24-hour time: ");
  scanf ("%2d:%2d", &hour, &min);

  
  return 0;
}

