#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: arrays of input characters
 *
 * Return: always o (success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
