#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
  * create_file - a function that creates a file
  * @filename: parameter of type const char *
  * @text_content: parameter of type char *.
  * Return: int .
 */
int create_file(const char *filename, char *text_content)
{
	int access_n, write_n, fd;

	access_n = access(filename, F_OK);
	if (filename == NULL)
		return (-1);
	if (access_n != 0)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
	}
	write_n = dprintf(fd, "%s", text_content);
	if (write_n == -1)
		return (write_n);

	close(fd);

	return (1);
}
