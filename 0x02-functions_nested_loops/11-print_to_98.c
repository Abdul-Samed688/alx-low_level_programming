#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * @n: variable to hold natural numbers
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%i", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
