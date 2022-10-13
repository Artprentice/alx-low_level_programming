#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Function that returns the sum of all it's parameters.
 * @n: number of parameters
 * @...: variable parameters to be summed
 * Return:if n == 0 - 0 else,- sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
