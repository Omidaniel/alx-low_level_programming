#include <stdio.h>

/**
 * main - main block
 * Prints the lowecase alphabet in reverse order
 * followed by a new line
 * using only putchar twice
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);
}
