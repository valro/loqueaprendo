/* 
 * pp_7_04.c
 * Write a program that translate an alphabetic phone number into numeric form:
 * 
 * Enter phone number: CALLATT
 * 2255288
 * 
 * (in case you don't have a telephone nearby, here are the letters on the keys: 2=ABC, 3=DEF, 4=GHI
 * 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the original phone number contains nonalphabetic
 * characters (digits or punctuation, for example), leave them unchanged:
 *
 * Enter phone number: 1-800-COL-LECT
 * 1-800-265-5328
 * 
 * You may assume that any letters entered by the user are uppercase.

 * date:09/03/2020
 * author: vgs
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("\nEnter phone number: ");

    while ((ch = getchar()) != '\n')
    {
        switch (toupper(ch))
        {
            case 'A': case 'B': case 'C':
                printf("2");
                break;
            case 'D': case 'E': case 'F':
                printf("3");
                break;
            case 'G': case 'H': case 'I':
                printf("4");
                break;
            case 'J': case 'K': case 'L':
                printf("5");
                break;
            case 'M': case 'N': case 'O':
                printf("6");
                break;
            case 'P': case 'R': case 'S':
                printf("7");
                break;
            case 'T': case 'U': case 'V':
                printf("8");
                break;
            case 'W': case 'X': case 'Y':
                printf("9");
                break;
            default:
                putchar(ch);
        }
    }

    printf("\n\n");

    return 0;
}

