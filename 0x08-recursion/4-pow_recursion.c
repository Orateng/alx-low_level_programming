#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The number to be raised
 *@y: The power
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	if (y == 1)
		return (result);
	if (y == 0)
		return (1);
	return (result * _pow_recursion(result, (y - 1)));
}
