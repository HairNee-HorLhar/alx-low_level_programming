#include <stdio.h>
#include "main.h"

/**
 * exponent - a to the power of b
 * @a: base number
 * @b: exponent
 * Description: calcuates a^b
 * 
 * Return: a^b
 **/

int exponent(int a, int b)
{
	int power;
	
	power = a;
	
	if (a == 0)
		return (0);
	if (b == 0)
		return (1);
	
	while (b >= 2)
	{
		power  = power * a;
		b--;
	}
	return (power);
}

/**
 * print_number - print an int using only _putchar
 * @number: int to be printed by function
 *
 * Return: nothing
 **/

void print_number(int number)
{
	int n, x, count, sign;

	sign = 1;
	x = 0;
	n = 1;
	count = number;
	
	if (number < 0)
	{
		_putchar('-');
		sign = -1;
	}
	
	for (; count >= 10 || count <= -10; n++)
	{
		count = count / 10;
	}
	
	count = number;
	
	while (n >= 2)
	{
		x = (count / exponent(10, n - 1)) * sign;
		_putchar(digit + '0');
		counter = counter % exponent(10, size - 1);
		n--;
	}
	_putchar(sign * count % 10 + '0');
}
