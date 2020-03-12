/* pp_7_02.c

 * Modify the square2.c program of Section 6.3 so that it pauses after every 24 squares and displays
 * the following message:
 * Press Enter to continue...
 * After displaying the message, the programshould use getchar to read a character. getchar won't
 * allow the program to continue until the user presses the Enter key. 
 * 
 * date: 09/03/2020
 * author: vgs
 * 
*/

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("\nThis program prints a table of squares.\n");
    printf("Enter the number of entries in a table: ");
    scanf("%d", &n);
    getchar();

    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0)
        {
            printf("Press Enter to continue...\n");
            getchar();
        }
    }

    printf("\n");

    return 0;
}
