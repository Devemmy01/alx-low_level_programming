#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if s1 and s2 are equal
 * else the difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int n;

	for (n = 0; s1[n] != '\0' && s2[n] != '\0'; n++)
	{
		if (s1[n] != s2[n])
			return (s1[n] - s2[n]);
	}

	if ((s1[n] == '\0' && s2[n] != '\0' && s2[n] == '\0'))
	{
		return (s1[n] - s2[n]);
	}
	return (0);
}
