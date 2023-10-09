#include <stdio.h>
/**
 * main - Entry Block
 * Description: print alphabet without q and e
 * Return: 0(success)
 */
int main(void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
			ch++;
	}
	putchar('\n');
	return (0);
}
