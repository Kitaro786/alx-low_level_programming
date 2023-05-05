#include "main.h"

/**
 * print_binary - prints binary of a decimal equivalent
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int i, Count = 0;
	unsigned long int Current;

	for (i = 63; i >= 0; i--)
	{
		Current = n >> i;

		if (Current & 1)
		{
			_putchar('1');
			Count++;
		}
		else if (Count)
			_putchar('0');
	}
	if (!Count)
		_putchar('0');
}
