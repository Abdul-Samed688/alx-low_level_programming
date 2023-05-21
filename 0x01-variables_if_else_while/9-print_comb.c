#include <stdio.h>

/**
  *main - Entry point
  *Description: print all possible combination of a single-digit numbers
  *Return: always 0
  */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
