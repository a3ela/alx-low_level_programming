#include "main.h"
/**
 * _pow_recursion - x value raised by the power of y
 * @x: value 1
 * @y: value 2
 * Return: value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(int x, y - 1));
	}
}
