#include "main.h"
/**
 * print_last_digit - print last number
 * @n: number to compute
 * Return: last value
 */
int print_last_digit(int n)
{
	int last_num = n % 10;

	if (last_num < 0)
		last_num = last_num * -1;

	return (last_num);
}
