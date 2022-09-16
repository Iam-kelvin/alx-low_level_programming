#include "main.h"
#include <math.h>
/**
 * print_number - function that prints an integer
 * @n: integer to be printed
 * Return: The value
 */
void print_number(int n)
{

	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('_');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	putchar((n1 % 10) + '0');
}
