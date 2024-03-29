#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *		pointed to by @s with the constant byte @c
 * @s: pointer to the memory area to be filled.
 * @b: character to fill the memory area with.
 * @n: number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
