#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: variable to hold first value
 * @b: variable to hold second value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;

	*b = c;
}
