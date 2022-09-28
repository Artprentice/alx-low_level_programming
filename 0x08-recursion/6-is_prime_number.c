#include "main.h"
/**
 * is_divi - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 * Return: If the number is divisible = 0
 *         If the number is not divisible = 1
 */
int is_divi(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divi(num, div + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to return the square root of
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divi(n, div));
}
