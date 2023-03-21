#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char *chars = "_putchar";
	char term = '\n';

	while (*chars != '\0')
	{
		_putchar(*chars);
		chars++;
	}
	_putchar(((int)term));
	return (0);
}
