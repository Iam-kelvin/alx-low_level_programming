#include <stdio.h>
/**
 * print_number - prints an integer
 * @n:.input integer parameter
 */
void print_number(int n)
{
	unsigned int p = n;
	if (n < 0)
	{
		_putchar(45);
		p = -p;
	}
	if (p / 10)
	{
		print_number(p / 10);
	}
	_putchar(p % 10 + '0');
}
