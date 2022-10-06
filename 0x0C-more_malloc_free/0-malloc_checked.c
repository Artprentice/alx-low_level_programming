#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - checks if allocation succeds
 * @b: size to be allocated
 * Return: 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
