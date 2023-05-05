#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string containing binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int DecVal = 0;

	if (!b)
		return(0);

	for (i = 0' b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		DecVal = 2 * DecVal + b[i] - '0';
	}

	return (DecVal);
}
