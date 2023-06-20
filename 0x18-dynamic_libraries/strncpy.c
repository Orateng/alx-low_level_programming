#include "main.h"

/**
 * _strncpy - writes the character c to stdout
 * @dest: The character to print
 * @src: Source
 * @n: String
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

        while (i < n && *(src + i) != '\0')
        {
                *(dest + i) = *(src + i);
                i++;
        }
        while (i != n)
                dest[i++] = '\0';
        return (dest);
}
