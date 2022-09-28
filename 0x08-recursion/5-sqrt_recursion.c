#include "main.h"
/**
 * find_sqrt - finds the root
 * @num: the number to be sqrted
 * @root: the sqr root of num
 * Return: the root to be tested
 */
int find_sqrt(int num, int root);

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
 /**
  * _sqrt_recursion - returns natural sqr root of digit
  * @n: digit
  * Return: sqr root of digit
  */
int _sqr_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
		

	return (find_sqrt(n, root));
}
