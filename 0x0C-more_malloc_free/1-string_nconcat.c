#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array initialized it to zero
* @nmemb: num of elements in the array
* @size: size of the array
* Return: returns a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, t;

	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = nmemb * size;

	p = malloc(t);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < t; i++)
		p[i] = 0;

	return ((void *) p);
}