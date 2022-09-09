#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints alphabets in lowercase followed by new line
 * Return: 0 (Successful)
 */
int main(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'q' && ch != 'e')
	putchar(ch);
	}

	putchar(10);

	return (0);
}
