#include "main.h"

/**
 * print_line - draws a straight line using the character _
 * @n: the number of _ characters to be printed.
 */
void print_line(int n)
{
	int lt;

	if (n > 0)
	{
		for (lt = 0; lt < n; lt++)
			_putchar('_');
	}
	_putchar('\n');
}
