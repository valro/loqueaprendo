/* 
 *Here's a simplified version of the Beaufort scale, which is used 
 *to estimate wind force:
 *Speed (Knots)      Description
 *Less than 1        Calm
 *1-3                Light
 *4-27               Breeze
 *28-47              Gale
 *48-63              Storm
 *Above 63           Hurricane
 *
 *Write a program that asks the user to enter a wind speed (in knots), 
 *then displays the correspondent description.
 */

#include<stdio.h>

int main(void) {

  float speed;

  printf("Enter speed in knots: ");
  scanf("%f", &speed);

  printf("Speed (knots)\tDescription\n");
  if (speed < 1.00f)
    printf("%-10.2f\t Calm\n", speed);
  else if (speed >= 1.00 && speed <= 3.00)
    printf("%-10.2f\t Light\n", speed);
  else if (speed >= 4.00 && speed <= 27.00)
    printf("%-10.2f\t Breeze\n", speed);
  else if (speed >= 28.00 && speed <= 47.00)
    printf("%-10.2f\t Gale\n", speed);
  else if (speed >= 48.00 && speed <= 63.00)
    printf("%-10.2f\t Storm\n", speed);
  else if (speed > 63.00)
    printf("%-10.2f\t Hurricane\n", speed);
  
  return 0;
}

