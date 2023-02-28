#include "main.h"
#include <stdio.h>

/**
 * print_rev - printing a string in reverse
 * Description: print string backward
 * @s: the string to be printed in reverse
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i, n;

	n = strlens(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
