#include <main.h>
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination
 * @src: source
 * @n: number to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	*destination = dest;
	*source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);
}
