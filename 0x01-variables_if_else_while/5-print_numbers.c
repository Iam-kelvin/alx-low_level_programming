#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints all single digits of base 10
 * Return: 0 (Successful)
 */
int main(void)
{

	char d = '0';

	while (d <= '9')
	{
	putchar(d);
	d++;
	}
	putchar('\n');
	return (0);
}
