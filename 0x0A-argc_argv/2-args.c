#include <stdio.h>
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
	int i;
	(void)argc, (void)envp;
	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (EXIT_SUCCESS);
}
