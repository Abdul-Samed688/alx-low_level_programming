#include <stdio.h>
/**
  *main - Entry point
  *Description: print all numbers of base 16 in lowercase
  *Return: always 0
  */
int main(void)
{
	int num;
	int ch;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
