#include "main.h"

/**
 * _atoi - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
        int signo = 1;

        while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
        {
                if (s[i] == '-')
                        signo *= -1;
                i++;
        }
 while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
        {
                if (n >= 0)
                {
                        n = n * 10 - (s[i] - '0');
                        i++;
                }
                else
                {
                        n = n * 10 - (s[i] - '0');
                        i++;
                }
        }
        signo *= -1;
        return (n * signo);
}
