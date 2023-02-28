#include "main.h"
#include <stdio.h>

/**
 * _puts - this is a function that puts
 * Description: puts a string
 * @str: a param to puts function
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	for (, *str != '\0' ; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
