#include "main.h"
/**
 * find_sqrt - finds the root
 * @num: the number to be sqrted
 * @root: the sqr root of num
 * Return: the root to be tested
 * _sqrt_recursion - returns natural sqr root of digit
 * @n: digit
 * Return: sqr root of digit
 */
int root = 0;

int _sqr_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
	{
		if ((root * root) == n)
			return (root);
		if (root == n / 2)
			return(-1);
		else
			root++;
	}
	return (_sqr_recursion(n));
}
