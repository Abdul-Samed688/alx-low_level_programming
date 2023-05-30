#include "main.h"

/**
 * _strlen - checks length of a string
 * @s: variable to check
 * Return: the lenght of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
