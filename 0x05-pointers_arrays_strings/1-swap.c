#include "main.h"
/**
 * swap.int - function that swaps the value
 *  of two integers.
 *  @a: address of first value.
 *  @b: address of second value.
 *  Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
