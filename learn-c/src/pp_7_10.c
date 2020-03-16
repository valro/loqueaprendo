/* Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence:
 *
 * Enter a sentence: And that's the way it is.
 * Your sentence contains 6 vowels.
 * -----------------
 * date:16/03/2020
 * author: vgs
 * name:pp_7_10.c
 * -----------------
 */
#include<stdio.h>
#include<ctype.h>

int main(void)
{
  char input_letter;
  int num_vowels;

  printf("\nEnter a sentence: ");

  while ((input_letter = getchar()) != '\n')
    {
      switch (toupper(input_letter))  /* convert for counting */
	{
	case 'A': case 'E': case 'I': case 'O': case 'U':
	  num_vowels++;
	}

    }

    printf("Your sentence contains %d vowels.\n\n", num_vowels);

  return 0;
}
