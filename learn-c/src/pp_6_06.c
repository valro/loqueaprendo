/* 
 *Write a program that prompts the user to enter n, then prints all even 
 *even squares between 1 and n. For example, if the user enters 100,
 *the program should print the following:
 *4
 *16
 *36
 *64
 *100
 *
 */
#include<stdio.h>

int main(void) {

  int number, square = 0;
  int counter = 0;

  printf("Enter a number: ");
  scanf("%d", &number);

  
  while ( square < number) {

    counter += 2;
    square = counter * counter;

    if ( square < number)
      printf("%d\n", square);

    
  } 
  

  return 0;
}
