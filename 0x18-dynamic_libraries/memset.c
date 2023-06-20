#include "main.h"

/**
 * _memset - writes the character c to stdout
 * @s: The character to print
 * @b: Characters
 * @n: String
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

        while (i < n)
        {

                *(s + i) = b;
                i += 1;
        }
        return (s);
}
