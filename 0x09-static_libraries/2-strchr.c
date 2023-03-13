#include "main.h"
#include <string.h>
/**
* _strchr - prints character string
* @s: input
* @c: input
*
* Return: always 0 (success)
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
