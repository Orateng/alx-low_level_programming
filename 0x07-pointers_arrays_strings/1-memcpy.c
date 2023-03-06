
#include "main.h"
 #include <string.h>
/**
* _memcpy - prints buffer in hexa
* @dest: memory where is stored
* @src: memory where is copied
* @n: number of bytes
*
* Return: copied memory with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int r = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

