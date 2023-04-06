#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[], char *envp[])
{
	(void)argc, (void)envp;
	printf("%s\n", argv[0]);
	return EXIT_SUCCESS;
}
