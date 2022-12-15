#include "main.h"
/**
* print_numbers - function that prints the numbers, from 0 to 9.
*/
void print_numbers(void)
{
	int numbers = 0;

	while (numbers < 10)
	{
		_putchar(numbers + '0');
		numbers++;
	}
	_putchar('\n');
}
