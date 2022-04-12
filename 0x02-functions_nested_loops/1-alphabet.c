#include <stdio.h>

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char y;

	y = 'a';

	while (y <= 'z')
	{
		putchar(y);
		y++;
	}

	putchar('\n');

}
