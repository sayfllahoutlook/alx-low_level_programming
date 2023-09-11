#include <stdio.h>

/**
 * main - Entry point
 *Description: Print alphabet lowercase
 * Return: Zero value
 *this programe  Return: 0
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		if (b != 'q' && b != 'e')
			putchar(b);
	putchar('\n');
	return (0);
}
