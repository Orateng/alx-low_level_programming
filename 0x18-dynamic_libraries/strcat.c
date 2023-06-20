#include "main.h"

/**
 * _strcat - writes the character c to stdout
 * @dest: The character to print
 *@src: Source
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
unsigned int i = 0;
        unsigned int j = 0;

        while (*(dest + i) != '\0')
                i++;
        while (*(src + j) != '\0')
        {
                *(dest + i) = *(src + j);
                i++;
                j++;
        }
        return (dest);
}
