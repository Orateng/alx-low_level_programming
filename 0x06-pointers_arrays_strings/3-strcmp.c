#include "main.h"
#include <stdlib.h>

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
