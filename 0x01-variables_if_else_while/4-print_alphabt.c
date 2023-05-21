#include <stdio.h>

/**
  *main - Entry point
  *Description: print alphabet in lowercase except e and q
  *Return: always 0
  */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (ch != 101 && ch != 113)
		{
			putchar(ch);
		}

	}
	putchar('\n');
	return (0);
}
