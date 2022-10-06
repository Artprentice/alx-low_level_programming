#include "main.h"
#include <stdlib>
/**
 * _calloc - allocates memory of an array initialized to zero
 * @nmemb: no of elements in array
 * @size: size of array
 * Return: pointer to allocated memory
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

	for(i = 0; i < (t); i++)
		p[i] = 0;
	return ((void *)p);
}
