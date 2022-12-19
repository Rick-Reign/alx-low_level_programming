#include "main.h"

/**
 * _puts -write a functon that prints a string, followed by a new line, to
 * stdout.
 *
 * @str: This is my input string
 */

void _puts(char *str)
{
	int index;

	for (index = 0; stri[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
