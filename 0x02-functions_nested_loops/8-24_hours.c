#include "main.h"

/**
 * jack_bauer - Entry point
 * Description: prints every minute
 * starting from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int hrs, mins;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			putchar('0' + hours / 10);
			putchar('0' + hours % 10);
			putchar(':');
			putchar('0' + minutes / 10);
			putchar('0' + minutes % 10);
			putchar('\n');
		}
	}
}

