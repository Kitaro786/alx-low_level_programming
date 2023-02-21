#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: the number to be treated
 * Return: Always 0 (success)
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}