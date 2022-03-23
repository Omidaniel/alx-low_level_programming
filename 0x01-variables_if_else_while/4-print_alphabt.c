#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Prints all alphabets in lowercase followed by a new line
 * does not print q and e
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{

		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}

		c++;
	}

	putchar('\n');

	return (0);
}

