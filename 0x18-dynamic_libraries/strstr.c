#include "main.h"

/**
 * _strstr - writes the character c to stdout
 * @haystack: The character to print
 * @needle: Character
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strstr(char *haystack, char *needle)
{
 char *res;
        char *aux;

        while (*haystack != '\0')
        {
                res = haystack;
                aux = needle;

                while (*aux == *haystack && *aux != '\0'
                       && *haystack != '\0')
                {
                        haystack++;
                        aux++;
                }
                if (*aux == '\0')
                        return (res);
                haystack = res + 1;
        }
        return (NULL);
}
