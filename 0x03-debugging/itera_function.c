#include <stdio.h>

/**
 * i is the variable to print
 * testing a while loop
 */

int main(void)
{
    int i;
    i = 6;

    while (--i)
    {
        printf("%d", i);
    }
    printf("\n");  /*Add a newline character to separate the output from the shell prompt*/
    return 0;
}
