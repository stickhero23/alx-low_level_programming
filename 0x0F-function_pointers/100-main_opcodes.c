#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments.
 * Return: Always 0, success.
 */
int main(int argc, char *argv[])
{
	char *opcode = (char *) main;
	int i, num_bytes;

	if (argc !=  2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", opcode[i] & 0xFF);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
