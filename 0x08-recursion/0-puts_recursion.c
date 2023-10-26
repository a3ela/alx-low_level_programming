#include "main.h"
/**
 * _puts_recursion - print string with recursion
 * @s: is our string of char
 * Return: the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
