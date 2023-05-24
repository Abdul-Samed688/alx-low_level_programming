#include "main.h"

/**
 * times_table - prints the 9 times table
 * starting with 0
 * Return: void
 */
void times_table(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			int multiply = num1 * num2;

			_putchar('0' + (multiply / 10));
			_putchar('0' + (multiply % 10));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
