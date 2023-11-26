#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in string
 * @s: string to be searched
 * @c: target char
 * Return: pointer to the occurrence of c or NULL is char not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}
