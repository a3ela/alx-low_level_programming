#include "main.h"
/**
 * print_sign - return 1 and print + if postive and -1 and - otherwise
 * 0 is printed for 0
 * @n: the number to be checked
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
