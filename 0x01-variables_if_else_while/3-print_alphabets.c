#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print alphabets in lower case
 * Return: 0 (successful)
 */
int main(void)
{

	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
	putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
	putchar(ch);
	}
	putchar(10); /*This is the ASCII code for new line */
	return (0);
}
