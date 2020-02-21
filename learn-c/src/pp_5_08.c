/* 
 *The following table shows the daily flights from one city to another:
 *Departure time     Arrival time
 *  8:00 a.m.         10:16 a.m.
 *  9:43 a.m.         11:52 a.m.
 * 11:19 a.m.          1:31 p.m.
 * 12:47 p.m.          3:00 p.m.
 *  2:00 p.m.          4:08 p.m.
 *  3:45 p.m.          5:55 p.m.
 *  7:00 p.m.          9:20 p.m.
 *  9:45 p.m.         11:58 p.m.
 *
 *Write a program that asks user to enter a time (expressed in hours 
 *and minutes, using the 24-hour clock). The program the displays the 
 *departure and arrival times for the flight whose deparure time is 
 *closest to that entered by the user:
 *
 *Enter a 24-hour time: 13:15
 *Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
 *
 *Hint: Convert the inoput into time expressed in minutes since
 *midnight, and compare it to the departure times, also expressed in 
 *minutes since midnight. For example, 13:15 is 13 * 60 + 15 = 795 
 *minutes since midnight, which is closer to 12:47 p.m. (767 mininutes
 *midnight) than to any of the other departure times.
 *
 *Date: 21/02/2020
 *author: vgs
 *
 */
#include<stdio.h>

int main(void) {

  int hour, minutes, totmin;
  int dif1, dif2, dif3, dif4, dif5, dif6, dif7, dif8;
  int min1, min2, min3, min4, min12, min21; // temp min
  int closest;
  
  printf("Enter a 24/hour time: ");
  scanf("%2d:%2d", &hour, &minutes);

  totmin = hour * 60 + minutes;
  printf("Your time is: %2d:%2d\n", hour, minutes);
  printf("Total from midnight: %d\n", totmin);
  
  // Se calculan todas las posibles diferencias
  
  dif1 = totmin - (8 * 60);
  dif2 = totmin - (9 * 60 + 43);
  dif3 = totmin - (11 * 60 + 19);
  dif4 = totmin - (12 * 60 + 47);
  dif5 = totmin - (14 * 60);
  dif6 = totmin - (15 * 60) + 45;
  dif7 = totmin - (19 * 60);
  dif8 = totmin - (21 * 60) + 45;

  // Se expresan las diferencias en valor absoluto

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

  // Se determinan las cuatro menores diferencias
  // por compaaciones de dos a dos.

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

  // Se comparan las cuatro para obtener dos menores
  
  if (min1 < min2)
    min12 = min1;
  else
    min12 = min2;
  if (min3 < min4)
    min21 = min3;
  else
    min21 = min4;
  
  // Se determina la menor de las dos resultantes

  if (min12 < min21)
    closest = min12;
  else
    closest = min21;
  
  // Se determina el tramo al que corresponde y se imprime
  
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
  
  return 0;
}
