#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;// declaration variable

        printf("Infinite loop incoming :(\n"); // print statement

        i = 0; // initialization of variable

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n"); // variable is not increment i++

        return (0);
}
