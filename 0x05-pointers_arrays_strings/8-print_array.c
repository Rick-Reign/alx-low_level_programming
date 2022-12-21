#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: ponter to array.
 * @n: number of elements.
 *
 * Return: void.
 */

void print_array(int *a, int n)
{ int i;

	for (i = 0; i < n; i++)
	{
		printf("%", a[i]);
		if (i != n - 1)
		{
			pritnf(",");
			printf(" ");
		}
	}
	printf("\n");
}
