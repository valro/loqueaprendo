/*
 *Write a program that asks the user for a two-digit number, then prints 
 *the English word for the number:
 *
 *Enter a two-digit number: 45
 *You entered the number forty-five.
 *
 *Hint: Break the number into two digits. Use one switch statement to 
 *print the word for the first digit ("twenty", "thirty", and so forth). 
 *Use a second switch statement to print the word for the second digit. 
 *Don't forget that the numbers between 11 and 19 require special 
 *treatment.
 *
 *date: 21/02/2020
 *author: vgs
 *
 */
#include<stdio.h>

int main(void)  {

  int number;

  printf("Enter a two-digit number: ");
  scanf("%2d", &number);
  
  if (number > 20) {
    switch (number / 10) {
    case 2:
      switch (number % 10) {
      case 1:
	printf("You entered the number twenty-one\n");
	break;
      case 2:
	printf("You entered the number twenty-two\n");      
	break;
      case 3:
	printf("You entered the number twenty-three\n");
	break;
      case 4:
	printf("You entered the number twenty-four\n");
	break;
      case 5:
	printf("You entered the number twenty-five\n");
	break;
      case 6:
	printf("You entered the number twenty-six\n");
	break;
      case 7:
	printf("You entered the number twenty-seven\n");
	break;
      case 8:
	printf("You entered the number twenty-eigth\n");
	break;
      case 9:
	printf("You entered the number twenty-nine\n");
	break;
      }
      break;
      
    case 3:
      
      switch (number % 10) {
      case 1:
	printf("You entered the number thirty-one\n");
	break;
      case 2:
	printf("You entered the number thirty-two\n");      
	break;
      case 3:
	printf("You entered the number thirty-three\n");
	break;
      case 4:
	printf("You entered the number thirty-four\n");
	break;
      case 5:
	printf("You entered the number thirty-five\n");
	break;
      case 6:
	printf("You entered the number thirty-six\n");
	break;
      case 7:
	printf("You entered the number thirty-seven\n");
	break;
      case 8:
	printf("You entered the number thirty-eigth\n");
	break;
      case 9:
	printf("You entered the number thirty-nine\n");
	break;
      }
      break;
      
    case 4:
      
      switch (number % 10) {
      case 1:
	printf("You entered the number forty-one\n");
	break;
      case 2:
	printf("You entered the number forty-two\n");      
	break;
      case 3:
	printf("You entered the number forty-three\n");
	break;
      case 4:
	printf("You entered the number forty-four\n");
	break;
      case 5:
	printf("You entered the number forty-five\n");
	break;
      case 6:
	printf("You entered the number forty-six\n");
	break;
      case 7:
	printf("You entered the number forty-seven\n");
	break;
      case 8:
	printf("You entered the number forty-eigth\n");
	break;
      case 9:
	printf("You entered the number forty-nine\n");
	break;
      }
      break;
      
    case 5:
      
      switch (number % 10) {

      case 1:
	printf("You entered the number fifty-one\n");
	break;
      case 2:
	printf("You entered the number fifty-two\n");      
	break;
      case 3:
	printf("You entered the number fifty-three\n");
	break;
      case 4:
	printf("You entered the number fifty-four\n");
	break;
      case 5:
	printf("You entered the number fifty-five\n");
	break;
      case 6:
	printf("You entered the number fifty-six\n");
	break;
      case 7:
	printf("You entered the number fifty-seven\n");
	break;
      case 8:
	printf("You entered the number fifty-eigth\n");
	break;
      case 9:
	printf("You entered the number fifty-nine\n");
	break;
      }
      break;
      
    case 6:
      
      switch (number % 10) {
      case 1:
	printf("You entered the number sixty-one\n");
	break;
      case 2:
	printf("You entered the number sixty-two\n");      
	break;
      case 3:
	printf("You entered the number sixty-three\n");
	break;
      case 4:
	printf("You entered the number sixty-four\n");
	break;
      case 5:
	printf("You entered the number sixty-five\n");
	break;
      case 6:
	printf("You entered the number sixty-six\n");
	break;
      case 7:
	printf("You entered the number sixty-seven\n");
	break;
      case 8:
	printf("You entered the number sixty-eigth\n");
	break;
      case 9:
	printf("You entered the number sixty-nine\n");
	break;
      }
      break;
      
    case 7:
      
      switch (number % 10) {
      case 1:
	printf("You entered the number seventy-one\n");
	break;
      case 2:
	printf("You entered the number seventy-two\n");      
	break;
      case 3:
	printf("You entered the number seventy-three\n");
	break;
      case 4:
	printf("You entered the number seventy-four\n");
	break;
      case 5:
	printf("You entered the number seventy-five\n");
	break;
      case 6:
	printf("You entered the number seventy-six\n");
	break;
      case 7:
	printf("You entered the number seventy-seven\n");
	break;
      case 8:
	printf("You entered the number seventy-eigth\n");
	break;
      case 9:
	printf("You entered the number seventy-nine\n");
	break;
      }
      break;
      
    case 8:
      
      switch (number % 10) {
      case 1:
	printf("You entered the number eighty-one\n");
	break;
      case 2:
	printf("You entered the number eighty-two\n");      
	break;
      case 3:
	printf("You entered the number eighty-three\n");
	break;
      case 4:
	printf("You entered the number eighty-four\n");
	break;
      case 5:
	printf("You entered the number eighty-five\n");
	break;
      case 6:
	printf("You entered the number eighty-six\n");
	break;
      case 7:
	printf("You entered the number eighty-seven\n");
	break;
      case 8:
	printf("You entered the number eighty-eigth\n");
	break;
      case 9:
	printf("You entered the number eighty-nine\n");
	break;
      }
      break;
      
    case 9:
      
      switch (number % 10) {
      case 1:
	printf("You entered the number ninety-one\n");
	break;
      case 2:
	printf("You entered the number ninety-two\n");      
	break;
      case 3:
	printf("You entered the number ninety-three\n");
	break;
      case 4:
	printf("You entered the number ninety-four\n");
	break;
      case 5:
	printf("You entered the number ninety-five\n");
	break;
      case 6:
	printf("You entered the number ninety-six\n");
	break;
      case 7:
	printf("You entered the number ninety-seven\n");
	break;
      case 8:
	printf("You entered the number ninety-eigth\n");
	break;
      case 9:
	printf("You entered the number ninety-nine\n");
	break;
      }
      
      break;
    }   
  }
  else {
    switch (number) {
    case 19:
      printf("You entered the number nineteen\n");
      break;
    case 18:
      printf("You entered the number eightteen\n");
      break;
    case 17:
      printf("You entered the number seventeen\n");
      break;
    case 16:
      printf("You entered the number sixteen\n");
      break;
    case 15:
      printf("You entered the number fifteen\n");
      break;
    case 14:
      printf("You entered the number fourteen\n");
      break;
    case 13:
      printf("You entered the number thirteen\n");
      break;
    case 12:
      printf("You entered the number twelve\n");
      break;
    case 11:
      printf("You entered the number eleven\n");
      break;
	
    }

  }
  return 0;
}
