#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: the source string
 *@dest: where the strings concatenates
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int n, i;

	for (i = 0; dest[i] != '\0'; i++)
	;
	{
		for (n = 0; src[n] != '\0'; n++)
		{
			dest[i + n] = src[n];
		}
	}
	dest[i + n] = '\0';
	return (dest);
}
