/* Modify Programming Project 8 from Chapter 5 so that the user
 * enters a time using the 12 hour clock. The input will have the
 * form hours : minutes followed by either A, P, AM, or PM (either
 * lower-case or upper-case). White space is allowed (but not
 * required) between the numerical time and the AM/PM indicator.
 * Examples of valid input:
 *
 * 1:15P
 * 1:15PM
 * 1:15p
 * 1:15pm
 * 1:15 P
 * 1:15 PM
 * 1:15 p
 * 1:15 pm
 *
 * You may assume that the input has one of these forms, there is no
 * need to test for errors.
 * 
 * date: 13/03/2020
 * author: vgs
 */

#include<stdio.h>
#include<ctype.h>

int main(void) {

  int hour, minutes, totmin;
  int dif1, dif2, dif3, dif4, dif5, dif6, dif7, dif8;
  int min1, min2, min3, min4, min12, min21; // temp min
  int closest;

  char am_pm;

  printf("\nEnter a 12-hour time: ");
  scanf("%2d:%2d %c", &hour, &minutes, &am_pm);

  // Determine hour from midnight
  switch (toupper(am_pm)) {

      case 'A':
	if (hour == 12)
	  hour -= 12;
	break;
      case 'P':
	hour = hour + 12;
	break;
      default:
	printf("You must specify am, pm, a, p, ...\n");
	return 0;
  }

  // Calculate the total minutes from midnight
  totmin = hour * 60 + minutes;
  printf("Your time is: %2d:%2d\n", hour, minutes);
  printf("Total from midnight: %d\n", totmin);

  // Now, calculate all differences from the time table specificed
  
  dif1 = totmin - (8 * 60);
  dif2 = totmin - (9 * 60 + 43);
  dif3 = totmin - (11 * 60 + 19);
  dif4 = totmin - (12 * 60 + 47);
  dif5 = totmin - (14 * 60);
  dif6 = totmin - (15 * 60) + 45;
  dif7 = totmin - (19 * 60);
  dif8 = totmin - (21 * 60) + 45;

  // These differences with absolute values

  if (dif1 < 0)
    dif1 = dif1 * (-1);
  if (dif2 < 0)
    dif2 = dif2 * (-1);
  if (dif3 < 0)
    dif3 = dif3 * (-1);
  if (dif4 < 0)
    dif4 = dif4 * (-1);
  if (dif5 < 0)
    dif5 = dif5 * (-1);
  if (dif6 < 0)
    dif6 = dif6 * (-1);
  if (dif7 < 0)
    dif7 = dif7 * (-1);
  if (dif8 < 0)
    dif8 = dif8 * (-1);

  // Now we get the four minimum differences
  if (dif1 < dif2)
    min1 = dif1;
  else
    min1 = dif2;
  if (dif3 < dif4)
    min2 = dif3;
  else
    min2 = dif4;
  if (dif5 < dif6)
    min3 = dif5;
  else
    min3 = dif6;
  if (dif7 < dif8)
    min4 = dif7;
  else
    min4 = dif8;

  // Now we get the two minimum in them
  if (min1 < min2)
    min12 = min1;
  else
    min12 = min2;
  if (min3 < min4)
    min21 = min3;
  else
    min21 = min4;

  // Finally we get the minimum of them

  if (min12 < min21)
    closest = min12;
  else
    closest = min21;

  // Now we can determine the closest in the time table
  
  if (closest == dif1)
    printf("Closest departure time is 8:00 a.m., arriving at 10:16  a.m\n");

  if (closest == dif2)
    printf("Closest departure time is 9:43 a.m., arriving at 11:52  a.m.\n");

  if (closest == dif3)
    printf("Closest departure time is 11:19 a.m., arriving at 1:31  p.m.\n");

  if (closest == dif4)
    printf("Closest departure time is 12:47 p.m., arriving at 3:00  p.m.\n");

  if (closest == dif5)
    printf("Closest departure time is 2:00 p.m., arriving at 4:08  p.m.\n");

  if (closest == dif6)
    printf("Closest departure time is 3:45 p.m., arriving at 5:55  p.m.\n");    

  if (closest == dif7)
    printf("Closest departure time is 7:00 p.m., arriving at 9:20  p.m.\n");

  if (closest == dif8)
    printf("Closest departure time is 9:45 p.m., arriving at 11:58   p.m.\n"); 

  printf("\n\n");
  
  return 0;
}

