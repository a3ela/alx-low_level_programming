#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 0; i < 10; i++)
	{
	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	}
}
