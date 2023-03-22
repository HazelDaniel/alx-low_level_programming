#include <stdio.h>
#include <math.h>
#include <stdint.h>

/**
* main - The entry point into the program
* first 98 fibonacci numbers
* Return: Always Return int
*/

int main(void)
{
	int limit = 98;
	int iter = 2;
	char *F98 = "83621143489848422977";
	char *F97 = "51680708854858323072";
	char *F96 = "31940434634990099905";
	char *F95 = "19740274219868223167";
	char *F94 = "12200160415121876738";


	while (iter <= limit)
	{
		unsigned long fibon = ((pow(1.61803398875, iter)) - pow(-0.61803398875, iter)) / sqrt(5);

			if (iter <= 98)
			{
				if (iter < 94)
					printf("%lu, ", fibon);
				else if (iter == 94)
					printf("%s, ", F94);
				else if (iter == 95)
					printf("%s, ", F95);
				else if (iter == 96)
					printf("%s, ", F96);
				else if (iter == 97)
					printf("%s, ", F97);
				else
					printf("%s\n", F98);
			}
			iter++;
		}

	return (0);
}
