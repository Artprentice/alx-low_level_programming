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
int _sqr_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

		if ((root * root) == n)
			return (root);

		if (root == n / 2)
			return (-1);

			root++;
	return (_sqr_recursion(n));
}
