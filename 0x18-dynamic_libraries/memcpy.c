#include "main.h"

/**
 * _memcpy - writes the character c to stdout
 * @dest: The character to print
 * @src: Source
 * @n: String
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
 unsigned int i = 0;
        unsigned int j = 0;

        while (i < n)
        {
                *(dest + i) = *(src + j);
                i += 1;
                j += 1;
        }
        return (dest);
}
