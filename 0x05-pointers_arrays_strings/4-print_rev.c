#include "main.h"
/**
 *print_rev - string in reverse
 *@s: character
 */
void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		printf("%c", *s);
	}
}
