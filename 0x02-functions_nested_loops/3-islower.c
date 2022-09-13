#include "main.h"
/**
 * _islower - check which is lower
 * Return: always
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
