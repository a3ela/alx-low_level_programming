#include "main.h"
/**
 * print_sign - print sign of number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */
int print_sign(int n)
{
	int retval = 0;

	if (n > 0)
	{
		_putchar('+');
		retval = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		retval = 0;
	}
	else
	{
		_putchar('-');
		retval = -1;
	}
	return (retval);
}
