#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -function to print alphabet in lowercase
 * with a new line
 * Return: 0 (successful)
 */
int main(void)
{

	char d = 'a';

	while (d <= 'z')
	{
	putchar(d);
	d++;
	}
	putchar('\n');
	return (0);
}
