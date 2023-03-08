#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to find the factorial of result
 *
 * Return: n
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);
	return (result * factorial(result - 1));
}
