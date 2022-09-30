#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments passed
 * @argc: Number of argument
 * @argv: array of pointer to the argument
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
