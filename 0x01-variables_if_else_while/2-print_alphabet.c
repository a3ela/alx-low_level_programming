#include <stdio.h>
/**
 * main - Entry Block
 * Description: print lowercase alphabet
 * Return: 0(success)
 */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
