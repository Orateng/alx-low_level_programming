#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * char *_strcpy - function for coping the string point
 * Description: prints copy
 * @dest: copy to
 * @src: copy from
 * Return: string output
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < 1 ; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
