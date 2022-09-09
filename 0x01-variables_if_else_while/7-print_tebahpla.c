#include <stdlib.h>
#include <stdio.h>
/**
 * main - printing lowercaes alphabeth in reverse
 * Return: 0 (Successful)
 */
int main(void)
{

	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar(ch);
	}
	putchar(10);
	return (0);
}
