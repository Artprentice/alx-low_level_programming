#include "main.h"
/**
 * swap_int - swaps two val
 * @a: first int
 * @b: sec int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
