#include "main.h"

/**
 * _memset - function that fill the first byte
 * @s: pointer to charater s
 * @b: character value
 * @n: unsigned value
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)

	{
		s[i] = b;
		i++;
	}
	return (s);
}

