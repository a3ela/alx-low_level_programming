#include "main.h"
/**
* print_most_numbers -  prints the numbers except 2 and 4.
*/
void print_most_numbers(void)
{
	int count = 0;

	while (count < 10)
	{
		if(count != 2 && count != 4)
		{
		_putchar(count + '0');
		}
		count++;	
	}
	_putchar('\n');
}
