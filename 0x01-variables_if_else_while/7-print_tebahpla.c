#include <stdio.h>

/**
  *main - Entry point
  *Description: print lowercase alphabet in reverse
  *Return: always 0
  */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
