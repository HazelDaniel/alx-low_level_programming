#include "main.h"
#include <stdlib.h>

/**
* main - The entry point of the program
* @argc: parameter of type int .
* @argv: parameter of type char *.
* @envp: parameter of type char *.
* Return: int .
*/
int main(int argc, char *argv[], char *envp[])
{
	(void)envp;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (EXIT_SUCCESS);
}
