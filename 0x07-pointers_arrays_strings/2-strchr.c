#include <main.h>
/**
 * _strchr - locates a character in a string.
 * @s: string to be parsed
 * @c: character to be found
 * Return: pointer to c if found and null if not
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
