#include "main.h"

/**
 * _strncat - writes the character c to stdout
 * @dest: The character to print
 * @src: Source
 * @n: String
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
unsigned int i = 0;
        int j = 0;

        while (*(dest + i) != '\0')
                i++;
        while (*(src + j) != '\0')
        {
                if (j < n)
                {
                        *(dest + i) = *(src + j);
                        i++;
                }
                j++;
        }
        return (dest);
}
