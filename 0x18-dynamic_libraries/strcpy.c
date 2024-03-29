#include "main.h"

/**
 * _strcpy - writes the character c to stdout
 * @dest: The character to print
 * @src: Source
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
int i;

        for (i = 0; src[i] != '\0'; i++)
        {
                *(dest + i) = *(src + i);
        }
        *(dest + i) = '\0';
        return (dest);
}
