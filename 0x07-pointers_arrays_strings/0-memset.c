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
	unsigned int index;
	char *memory = s, val = b;

	for (index = 0; index < n; index++)
		memory[index] = val;

	return (memory);
}
