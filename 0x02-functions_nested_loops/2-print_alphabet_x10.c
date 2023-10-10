#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10x
 * Return: 0(success)
 */
void print_alphabet_x10(void)
{
	int i;

	while (i < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
