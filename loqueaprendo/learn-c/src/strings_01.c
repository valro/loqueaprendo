#include<stdio.h>

int main(void)
{
  char input[64];

  printf("Instructions: ");
  fgets(input,64,stdin);

  puts("Thank you! Here are your Instructions: ");
  puts(input);

  return 0;

}
