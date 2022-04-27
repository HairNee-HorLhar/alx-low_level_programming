#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * 
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *x_haystack;
	char *x_needle;
	
	while (*haystack != '\0')
	{
		x_haystack = haystack;
		x_needle = needle;
		
		while (*haystack != '\0' && *x_needle != '\0' && *haystack == *x_needle)
		{
			haystack++;
			x_needle++;
		}
		if (!*x_needle)
			return (x_haystack);
		haystack = x_haystack + 1;
	}
	return (0);
}
