/* Write a program that asks the user for a 12-hour time, then displays the time in 24-hour form:
 *
 * Enter a 12-hour time: 9:11 PM
 * Equivalent 24-hour time: 21:11
 *
 * See Programming Project 8 for a description of the input format.
 * date: 16/03/2020
 * author: vgs
 */

#include<stdio.h>
#include<ctype.h>

int main(void) {

  int hour, minutes;
  char am_pm;

  printf("\nEnter a 12-hour time: ");
  scanf("%2d:%2d %c", &hour, &minutes, &am_pm);

  switch(toupper(am_pm))
    {

    case 'A':
      if (hour == 12)
	hour -= 12;
      break;
    case 'P':
      hour = hour + 12;
      break;
    default:
      printf("You must specify 'am' or 'pm' please!\n");

    }

  printf("Equivalent 24-hour time: %.2d:%.2d\n\n", hour, minutes);

  return 0;
}
