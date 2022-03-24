#include <stdio.h>

/**
 * main - main block
 * Prints all possible combinations of single-digit numbers
 * numbers separated by a comma followed by a space
 * numbers printed in ascending order
 * using only putchar four times
 * no variable of type char is allowed
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
