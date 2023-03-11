#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: checks the input
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
