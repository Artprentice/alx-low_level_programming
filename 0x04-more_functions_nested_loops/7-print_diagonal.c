#include "main.h"
/**
 * print_diagonal - draws a diagonal
 * @n: var
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, gap;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (gap = 0; gap < i; gap++)
				_putchar(' ');
			_putchar('\\');

			if (i == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
	return (0);
}
