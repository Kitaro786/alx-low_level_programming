#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int_putchar(char c)
{
	return (write(1, &c, 1));
}
