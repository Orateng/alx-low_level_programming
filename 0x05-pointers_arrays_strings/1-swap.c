#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * Description: swap two integer values
 * @a: parameter 1
 * @b: parameter 2
 *
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
