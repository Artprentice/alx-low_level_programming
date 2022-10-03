#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		j++;
	strout = malloc(sizeof(char) * (j + 1));

	if (strout == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		strout[i] = str[i];

	strout[j] = '\0';

	return (strout);
}
