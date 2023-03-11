#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: checks the input
 * @c: character
 *
 * Return: a pointer to the first occurences of c
 * in string s, or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
		{
			return (0);
		}
		s++;
	}
	return (s);
}
