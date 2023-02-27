#include "main.h"
#include <string.h>
/**
 * _strlen - function to get the length of a string
 * Description: get length of a string
 * @*s: string length
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int len;

	for (; *s != "\0"; s++)
	{
		len += 1;
	}
	return (len);
}
