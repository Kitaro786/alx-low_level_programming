#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
		i++;
	}
}
