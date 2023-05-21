#include <stdio.h>

/**
  *main - Entry point
  *Description: print alphabet in lowercase then uppercase
  *Return: always 0
  */
int main(void)
{
	int ch_Low, ch_Caps;

	for (ch_Low = 97; ch_Low <= 122; ch_Low++)
	{
		putchar(ch_Low);
	}
	for (ch_Caps = 65; ch_Caps <= 90; ch_Caps++)
	{
		putchar(ch_Caps);
	}
	putchar('\n');
	return (0);
}
