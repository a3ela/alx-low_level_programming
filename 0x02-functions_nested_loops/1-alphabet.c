#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'A function that prints lowercase alphabet'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
	return;
}
