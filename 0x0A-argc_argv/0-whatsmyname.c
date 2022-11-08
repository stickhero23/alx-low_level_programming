#include <stdio.h>
/**
 * main - entry point.
 * @argc: number of arguments
 * @argv: array of strings of arguments.
 * Return: Always 0, success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		print("%s\n", argv[0]);
	return (0);
}
