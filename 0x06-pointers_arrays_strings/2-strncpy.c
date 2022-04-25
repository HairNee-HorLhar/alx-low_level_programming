#include "main.h"
/**
 * _strncpy - copies a string to another
 * @dest: destination of copied string.
 * @src: source of copied string.
 * @n: amount of bytes of copied string from src.
 *
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;
	
	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	
	for ( ; x < n; x++)
		dest[x] = '\0';
	
	return (dest);
}
