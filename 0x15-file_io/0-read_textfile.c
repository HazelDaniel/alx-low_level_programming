#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * read_textfile - a function that appends
	* reads a file's content
  * @filename: parameter of type const char *.
  * @letters: the number of characters to be read
  * Return: ssize_t .
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t count = 0, file_stat, p_count;
	char *buffer = NULL;

	buffer = malloc((letters + 1) * sizeof(char));
	buffer[letters] = '\0';
	if (filename == NULL || buffer == NULL)
		return (0);

	file_stat = open(filename, O_RDONLY);
	if (file_stat == (size_t)-1)
		return (0);
	count = read(file_stat, buffer, letters);
	p_count = write(STDOUT_FILENO, buffer, count);
	if (p_count != count)
		return (0);
	if (close(file_stat) == -1)
		return (0);
	free(buffer);

	return (count);
}
