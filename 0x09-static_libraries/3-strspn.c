#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: numbers of bytes in the initail segement of s,
 * which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int q = 0;

	while (*s)
	{
		int a = 0;
		int z;

		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
			{
				a = 1;
				break;
			}
		}
		if (a)
		{
			q++;
		}
		else
		{
			break;
		}
		s++;
	}
	return (q);
}
