#include "main.h"

/**
 * reverse_array - Reverses array
 * @a: array
 * @n: Number of elements
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, b;
	
	j = n - 1;
	i = 0;
	
	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[j];
		a[j--] = b;
	}

}
