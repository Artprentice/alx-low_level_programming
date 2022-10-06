#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: num of bytes of s2 to be concatenated
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1, len2, tlen;
	char *str;

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			len1++;

	if (s2 != NULL)
		for (i = 0; s2[i] != '\0'; i++)
			if (i < n)
				len2++;

	tlen = len1 + len2 + 1;

	str = malloc(tlen);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < len2; i++, j++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);
}
