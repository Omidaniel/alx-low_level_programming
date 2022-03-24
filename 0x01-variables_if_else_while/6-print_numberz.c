#include <stdio.h>

/**
 * main - main block
 * Description: Prints all single digit numbers of base 10 starting from 0
 * using only putchar twice
 * variable type char not allowed
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)

		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
