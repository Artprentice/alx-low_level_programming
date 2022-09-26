#include <main.h>
/**
 * *_memset - fills first n bytes of memory area pointed
 * by s with const byte b
 * @*s: pointer
 * @b: char b
 * @n: n times to filled
 * Return: pointer in memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *mem = s;, val = b;

	for (i = 0; i < n; i++)
		mem[i] = val;

	return (mem);
}
