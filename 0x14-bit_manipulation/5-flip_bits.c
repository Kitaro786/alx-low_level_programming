#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, Count = 0;
	unsigned long int Current;
	unsigned long int Exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		Current = Exclusive >> i;
		if (Current & 1)
			Count++;
	}

	return (Count);
}
