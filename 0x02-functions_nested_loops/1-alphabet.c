#include "main.h"

/**
 * main  -the program print alphabet lowercase
 *
 * Return: null value
 */

void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');

}
