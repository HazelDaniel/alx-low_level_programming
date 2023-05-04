#include "main.h"
#include <stdio.h>

/**
 * get_endianness - a function that checks
 * the endianness of a fixed (bit or little, not both)
 * endian machine
 * Return: int
 **/
int get_endianness(void)
{
	int n = 0x12224f;
	unsigned char *ptr = (unsigned char *)&n, first_byte;

	first_byte = *ptr & 0xff;
	switch (first_byte)
	{
	case 0x4f:
		return (1);
	case 0x12:
		return (0);
	default:
		return (-1);
	}
}
