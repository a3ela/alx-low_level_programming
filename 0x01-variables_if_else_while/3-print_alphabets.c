#include <stdio.h>
/**
 * main - Entry block
 * Description: print both lower and upper alphabet
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
	char c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
