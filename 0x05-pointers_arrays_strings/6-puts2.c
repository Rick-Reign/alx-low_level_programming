#include "main.h"
#include <sting.h>

/**
 * puts2 -> puts2 function
 * @str: str parameter
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
