#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: var
 * Return: 0
 */
void print_triangle(int size)
{
	int x, y = 0;
	int gap;

	if (size > 0)
	{
		while (y < size)
		{
			gap = size - y - 1;
			while (x < size)
			{
				if (gap > x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				x++;
			}
			y++;
			x = 0;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
