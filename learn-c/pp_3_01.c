/*
date: 28/01/2020
author:vgs
*/

#include<stdio.h>

int main(void)
{
  int day, month, year;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%2d/%2d/%4d", &month, &day, &year);

  printf("You enter the date %4d%.2d%.2d: \n", year, month, day); 

  return 0;
}

