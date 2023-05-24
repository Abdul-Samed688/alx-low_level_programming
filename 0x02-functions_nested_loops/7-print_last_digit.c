#include "main.h"

/**
 * print_last_digit - Entry point
 * @num: variable to be checked
 * Description: prints the last digit of a number
 * Return: value of last digit
 */
int print_last_digit(int num)
{
	int lastDigit = num % 10;

	_putchar(lastDigit);
	return (lastDigit);
}
