#include <stdio.h>
/**
 * main - Entry block
 * Description: print both lower and upper alphabet
 * Return: 0(success)
 */
int main(void)
{
	char lower_ch = 'a';
	char upper_ch = 'A';

	while (lower_ch <= 'z')
	{
		putchar(lower_ch);
		lower_ch++;
	}
	while (upper_ch <= 'Z')
	{
		putchar(upper_ch);
		upper_ch++;
	}
	putchar('\n');
}
