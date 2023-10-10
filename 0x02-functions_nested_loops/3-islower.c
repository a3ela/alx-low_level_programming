#include "main.h"
/**
 * _islower - checks if a letter is lower
 * @c: the letter
 * Return: 0(success)
 */
int _islower(int c)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (c == letter)
		{
			return (1);
		}
		letter++;
	}
	return (0);
	_putchar('\n');
}
