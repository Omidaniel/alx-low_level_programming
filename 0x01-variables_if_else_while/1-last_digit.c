#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description: get a random number and print the number
 * print the last digit of the number
 * indicate if the last digit is greater than 5;
 * if it is 0
 * or if it is less than 6 and not 0
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
