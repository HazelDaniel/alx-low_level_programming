#include <stdio.h>

/**
* main - The entry point into the program
*
* Return: Always Return int
*/

int main(void)
{
	unsigned long fibon_array[50] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233,
		377, 610, 987, 1597, 2584, 4181, 6765, 10946,
		17711, 28657, 46368, 75025, 121393, 196418,
		317811, 514229, 832040, 1346269, 2178309,
		3524578, 5702887, 9227465, 14930352, 24157817,
		39088169, 63245986, 102334155, 165580141,
		267914296, 433494437, 701408733, 1134903170,
		1836311903, 2971215073, 4807526976,
		7778742049};
	unsigned long even_fibon_array [11];

	int index = 0;
	int even_index = 0;
	unsigned long even_acc = 0;

	while (index++ < 50)
	{
		if (fibon_array[index] < 4000000)
		{
			if (fibon_array[index] % 2 == 0)
			{
				even_fibon_array[even_index] = fibon_array[index];
				even_index++;
			}
		}
		else
		{
			break;
		}

	}
	for (even_index = 0; even_index < 11; even_index++)
	{
		even_acc += even_fibon_array[even_index];
	}
		printf("%lu\n", even_acc);
	return (0);
}
