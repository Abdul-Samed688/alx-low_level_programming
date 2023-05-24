#include "main.h"

/**
 * print_sign - Entry point
 * @n: variable to be checked
 * Return: 1 and print + if n is > 0
 * 0 and print 0 if n is 0
 * -1 and print - if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);

	}
	_putchar('\n');
}
