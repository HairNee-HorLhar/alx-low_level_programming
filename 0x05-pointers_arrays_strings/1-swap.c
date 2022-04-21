#include "main.h"

/**
 * swap_int - Swaps values of two integers
 * @p: integer being swapped
 * @pp: integer being swapped
 * Return: Nothing
 */

void swap_int(int *p, int *pp)
{
	int c;

	c = *p;
	*p = *pp;
	*pp = c;
}
