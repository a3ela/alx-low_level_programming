#include "main.h"
/**
 *main - Entry point
 *Description: print alphabet 10 times
 *Return: 0
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;
	/* initialization */
	

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
