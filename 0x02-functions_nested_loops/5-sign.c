#include "main.h"

/**
 * print_sign - print the sign of number
 * @n: the caracter holds number
 * Description: print +, 0 or - depnding on number, along with return
 * Return: 1 for positive -1 for negative and  0 for 0
 */
int print_sign(int n)
{
	if(n == 0)
	{
	
		_putchar('0');
	
		return(0);
	}
	else if(n == 1)
	{
		_putchar('+');
		return(1);
	}
	
	else if(n == -1)
	{
		_putchar('-');
		return(-1);
	}
	return (0);
}
