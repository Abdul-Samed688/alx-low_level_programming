#include <stdio.h>

/**
  *main - Entry point
  *Description: print all single digit of base 10 using putchar
  *Return: always 0
  */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + 48);
	}
	putchar('\n');
	return (0);
}
