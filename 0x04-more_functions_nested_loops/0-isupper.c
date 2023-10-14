#include "main.h"
/**
 * _isupper - checks upper case letters
 * @c: the character
 * Return: 1 if upper 0 if otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
		
}
