#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 * file: variadic_functions.h
 * Desc: Header file containing prototypes to all the functions used in 0x10-variadic_functions.
 */
#include <stdarg.h>
/**
 * struct printer - A struct type defining a printer
 * @symbol: Represents a data type
 * @print: A function pointer to a function that prints a data type relating to symbol
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
