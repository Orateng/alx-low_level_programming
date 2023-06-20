#include "main.h"

/**
 * _puts - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts(char *s)
{
int i = 0;

        while (s[i] != '\0')
        {
                _putchar(s[i]);
                i += 1;
        }
        _putchar('\n');
}
