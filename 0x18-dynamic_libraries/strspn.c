#include "main.h"

/**
 * _strspn - writes the character c to stdout
 * @s: The character to print
 * @accept: Characters
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
  unsigned int cont = 0;
        int j = 0;
        int flag;

        while (*s != '\0')
        {
                flag = 0;
                while (*(accept + j) != '\0')
                {
                        if (*s == *(accept + j))
                                flag = 1;
                        j += 1;
                }
                j = 0;
                if (flag == 0)
                        break;
                cont += 1;
                s++;
        }
        return (cont);
}
