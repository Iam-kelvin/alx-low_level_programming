#include <stdlib.h>
#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 followed by newline
 * Return: 0 (successful)
 */
int main(void)
{

	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
	putchar(ch);
	}
	putchar(10);
	return (0);
}
