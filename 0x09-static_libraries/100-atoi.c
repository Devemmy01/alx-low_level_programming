#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: checks the input
 *
 * Return: result with sign
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int z = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			z = (z * 10) + (*s - '0');
		else if (z > 0)
			break;
	} while (*s++);

	return (z * sign);
}
