#include "main.h"
#include <stdio.h>

/**
 * _strchar - locates a character in a string
 * @s: string to be searched
 * @c: target cahr
 * Return: pointer to occurrence of c or NULL if char not found
 */

char *_strchar(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}
