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
	unsigned int i;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb *size);
	if (p == NULL)
		return (NULL);

	for(i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
