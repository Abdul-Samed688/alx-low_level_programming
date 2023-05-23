#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints 10 times the alphabet
 * in lowercase followed by a new line.
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter;
	int multiplier;

	for (multiplier = 1; multiplier <= 10; multiplier++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

