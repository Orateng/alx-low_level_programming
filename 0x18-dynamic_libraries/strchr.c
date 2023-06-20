#include "main.h"

/**
 * _strchr - writes the character c to stdout
 * @s: The character to print
 * @c: Characters
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
        {
                if (*s == c)
                        return (s);
                s++;
        }
        if (*s == c)
                return (s);
        else
                return (NULL);
}
