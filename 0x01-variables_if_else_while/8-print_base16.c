#include <stdio.h>

/**
 * main - main block
 * Prints all the numbers of base 16 in lowercase
 * using only putchar thrice
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
