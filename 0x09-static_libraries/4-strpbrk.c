#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: pointer to input string
 * @accept: pointer to string@s
 *
 * Return: pointer to the bytes in @s
 *         or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	i = 0;
	while (s[i] != '\0')
	{
		n = 0;
		while (accept[n] != '\0')
		{
			if (s[i] == accept[n])
				return (s + i);
			n++;
		}
		i++;
	}
	return ('\0');
}
