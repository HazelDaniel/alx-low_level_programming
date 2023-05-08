#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
  * append_text_to_file - a function that appends
	* a text to an already created file
  * @filename: parameter of type const char *.
  * @text_content: parameter of type char *.
  * Return: int .
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int access_n, write_n, fd;

	access_n = access(filename, F_OK);
	if (filename == NULL)
		return (-1);
	if (access_n == 0)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
	}
	else
	{
		return (-1);
	}
	write_n = write(fd, text_content, strlen(text_content));
	if (write_n == -1)
		return (write_n);

	close(fd);

	return (1);
}
