#include <stdio.h>

/**
* main - The entry point into the program
* prints sum of natural numbers
* below 1024 and are multiples of 3 or 5
* Return: Always Return int
*/

int main(void)
{
	int first_num, second_num = 0;

	while (first_num < 1024)
	{
		if ((first_num % 3 == 0) || (first_num % 5 == 0))
		{
			second_num += first_num;
		}
		first_num++;
	}
	printf("%d\n", second_num);
	return (0);
}
