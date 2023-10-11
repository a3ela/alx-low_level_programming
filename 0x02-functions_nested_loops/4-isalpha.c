#include "main.h"
/**
 * _isalpha - checks alphabets
 * @c: the character
 * Return: 0(success)
 */
int _isalpha(int c)
{
	char low_alpha = 'a';
	char up_alpha = 'A';

	while (low_alpha <= 'z')
	{
		if (c == low_alpha)
			return (1);
		if (c == up_alpha)
			return (1);
		low_alpha++;
		up_alpha++;
	}
	return (0);
}
