#include "main.h"

/**
 *puts_half - function that prints half of a string
 *@str: pointer char
 */
void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}
	if (x % 2 != 0)
	{
		x = (x + 1) / 2;

		for (; str[x] != '\0';)
		{
			putchar(str[x++]);
		}
		putchar(10);
	}
	else if (x % 2 == 0)
	{
		x /= 2;

		for (; str[x] != '\0';)
		{
			putchar(str[x++]);
		}
		putchar(10);
	}
}
