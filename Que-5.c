/*
        10
      9 10
    8 9 10
  7 8 9 10
6 7 8 9 10 
*/
#include <stdio.h>

int main(void)
{
    // Declaring the varialbe
    int rows = 5;
    int i, s, num;

    // Starting the first loop
    for (i = rows; i >= 1; i--)
    {
        // Starting the loop for space
        for (s = i; s > 1; s--)
        {
            printf("  ");
        }

        // Starting the loop for no.
        for (num = 5 + i; num <= 10; num++)
        {
            printf("%d ", num);
        }

        // Printing new line.
        printf("\n");
    }

    return 0;
}
