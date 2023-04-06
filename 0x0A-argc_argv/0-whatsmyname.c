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
	(void)argc, (void)envp;
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
