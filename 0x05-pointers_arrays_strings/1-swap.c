#include "main.h"
/**
 * swap_int - swap two pointers
 * @a: the first parameter
 * @b: second parameter
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
