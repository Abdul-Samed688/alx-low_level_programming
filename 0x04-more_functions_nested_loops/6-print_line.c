#include "main.h"

/**
 * print_line - prints a line
 * @n: variable to hold the line
 * Return: 0
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
