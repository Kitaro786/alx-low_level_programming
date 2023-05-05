#include "main.h"

/**
 * get_bit - returns the value of a given bit
 * @n: number to search
 * @index: index of bit
 *
 * Return: Value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int BitVal;

	if (index > 63)
		return (-1);

	BitVal = (n >> index) & 1;

	return (BitVal);
}
