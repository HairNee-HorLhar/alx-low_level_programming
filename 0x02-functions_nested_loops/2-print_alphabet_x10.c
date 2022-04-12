#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * in lowercase followed by new line
 */
void print_alphabet_x10(void)
{
	char y;
	int i;

	i = 0;

	while (i < 10)
	{
		y = 'a';
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		i++;
	}

}
