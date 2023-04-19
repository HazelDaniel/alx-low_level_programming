#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to the program
 * @argc: argument count.
 * @argv: argument vector.
 * Return: int
 */
int main(int argc, char *argv[], char *envp[])
{
	char *opc = (char *) main;
	int i, bytes_num;
	(void)envp;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes_num = atoi(argv[1]);

	if (bytes_num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes_num; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != bytes_num - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
