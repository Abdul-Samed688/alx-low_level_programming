#include "main.h"

/**
 * print_most_numbers - prints numbers from
 * 0 to 9 excluding 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar (n);
		}
	}
	_putchar ('\n');
}
