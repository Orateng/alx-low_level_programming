#include "main.h"

/**
 * _strpbrk - writes the character c to stdout
 * @s: The character to print
 * @accept: Character
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strpbrk(char *s, char *accept)
{
int j = 0;
        int flag;

        while (*s != '\0')
        {
                flag = 0;
                while (*(accept + j) != '\0')
                {
                        if (*s == *(accept + j))
                                flag = 1;
                        j++;
                }
                j = 0;
                if (flag == 1)
                        return (s);
                s++;
        }
        return (NULL);
}
