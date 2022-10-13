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
	unsigned int i;
	sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	return (sum);
	va_end(args);
}
