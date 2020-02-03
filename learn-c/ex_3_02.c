/* Write calls of printf that display a float variable x in the following format:

   a) Exponential notation: left justified in a field of size 8; one digit after the decimal point.
   b) Exponential notation: right justitfied in a field of size 10; six digits after the decimal point.
   c) Fixed decimal notation: left justified in a field of size 8; three digits after the decimal point.
   d) Fixed decimal notation: right justified in a field of size 6; no digits after the decimal point.

Date: 28/01/2020
author: vgs

*/

#include<stdio.h>

int main(void)
{

  printf("%9.1e\n", 54673.78345);
  printf("%-10.6e\n", 673.78345);
  printf("%8.3f\n", 54673.78345);
  printf("%-6.f\n", 54673.78345);
  
  return 0;
}
