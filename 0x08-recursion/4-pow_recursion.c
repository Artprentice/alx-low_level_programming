#include "main.h"
/**
 * _pow_recursion - Returns the val of x raised to pow y
 * @x: digit to be raised
 * @y: power to be raised to
 * Return: x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	x *= _pow_recursion(x, y - 1);
	return (x);
}
