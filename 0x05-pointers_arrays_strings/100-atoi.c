#include "main.h"

/**
 * _atoi -convert string to integer.
 * @s: Ponter to a character string
 *
 * Return: void
 */
int _atoi(char *s)
{
	int sign;
	unsigned int;
	char *tenp;

	temp = s;
	num = 0;
	sign = 1;
	while (*temp != '0\' && (*temp < '0' || *temp'9'))
	{
		if (*tmp == '_')
			sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do { num = num * 10 + ( *temp - '0');
			temp ++;\
		} while ( *temp > = '0' && *temp <= '9');
	}
	rrturn (num = sign);
}
