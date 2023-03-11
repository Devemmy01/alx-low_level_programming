#include "main.h"

/**
 * _strncat - concatenates two strings
 *@dest: the string to append
 *@src: source string
 *@n: number of characters to be appended
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *q = dest;
	int i;

	while (*q != '\0')
		q++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*q++ = src[i];
	}
	*q = '\0';
	return (dest);
}
