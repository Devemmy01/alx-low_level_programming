#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to the string being searched
 * @needle: pointer to the substring being searched
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, n;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (n = 0; needle[n] != '\0'; n++)
		{
			if (haystack[i + n] != needle[n])
				break;
		}
	if (needle[n] == '\0')
	return (haystack + i);
	}
return (0);
}
