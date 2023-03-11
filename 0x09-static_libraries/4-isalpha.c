#include "main.h"

/**
 * _isalpha - checks for lowercase character.
 *
 * @c: checks input of function
 *
 * Return: 1 if c is an alphabet, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
