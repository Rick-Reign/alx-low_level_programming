#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: this is the first integer
 * @b: this is th second entry
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
