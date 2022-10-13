#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by new line
 * @separator: The string to be printed between lines
 * @n: number of integers passed to the function
 * @...: variable number of parameters to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list = nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d\n", va_arg(nums, int));

		if (separator != NULL)
			printf("%s\n", separator);
	}
	printf("\n");
	va_end(nums);
}
