#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of input characters
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
