#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: The number
 * Return:if n<0 return -1 if ==0 return 1
 */
int factorial(int n)
{
	int res = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);

	res *= factorial(n - 1);
	return (res);
}
