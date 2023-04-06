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
	(void)envp, (void)argv;
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
