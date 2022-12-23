#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the forst string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative of the first unmatched char
 * If str! == str2, 0.
 * if str 1 > str 2, the positive difference of the first unmatche char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
