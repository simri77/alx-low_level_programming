#include <stdio.h>
/**
 * main - Enrty point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar (alph);
	}
	putchar ('\n');
	return (0);
}
