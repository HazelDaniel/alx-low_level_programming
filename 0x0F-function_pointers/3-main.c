#include "3-calc.h"

int main (int argc, char *argv[])
{
	int op1, op2;
	int (*eval)(int, int), result;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if (*(argv[2]) != '+' && *(argv[2]) != '-'
	&& *(argv[2]) != '*' && *(argv[2]) != '/'
	&& *(argv[2]) != '%')
	{
		puts("Error");
		exit(99);
	}
	op1 = atoi(argv[1]);
	op2 = atoi(argv[3]);
	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && op2 == 0)
	{
		puts("Error");
		exit(100);
	}
	eval = get_op_func(argv[2]);
	if (eval == NULL)
	{
		puts("Error");
		exit(99);
	}
	result = eval(op1, op2);
	printf("%d\n", result);
	return (0);
}

