#include "main.h"
#include <string.h>
/**
* _memset - prints buffer in hexa
* @s: starting address of memeory to be filled
* @b: the desired value
* @n: number of bytes to be changed
*
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
