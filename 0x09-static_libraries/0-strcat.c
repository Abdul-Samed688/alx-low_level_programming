#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a++])
		b++;
	for (a = 0; src[a]; a++)
		dest[b++] = src[a];
	return (dest);
}
