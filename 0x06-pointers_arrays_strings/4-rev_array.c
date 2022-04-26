#include "main.h"

/**
 * reverse_array - reverses the elements of an array
 * of integers.
 * @a: the array whose elemnts are to be reversed.
 * @n: number of elements of the array.
 *
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int x, y, init;
	
	for (x = 0; x < n - 1; x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			temp = *(a + y);
			*(a + y) = *(a + (y - 1));
			*(a + (y - 1)) = init;
		}
	}
}
