#include "main.h"
#include <string.h>
#include <stdlib.h>

void cp_file(const char *file1, const char *file2);
void err_file_read(const char *file, int code);
void handle_close_err(ssize_t fd, int code);

/**
  * main - The entry point of the program
  * @argc: parameter of type int .
  * @argv: parameter of type (char *)[].
  * @envp: parameter of type (char *)[].
  * Return: int .
 */
int main(int argc, char *argv[], char *envp[])
{
	(void)envp;
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	cp_file(argv[1], argv[2]);
	return (EXIT_SUCCESS);
}

/**
  * cp_file - a function that copies the contents
	* of one file to another
  * @file1: parameter of type const char *.
  * @file2: parameter of type const char *.
  * Return: void .
 */
void cp_file(const char *file1, const char *file2)
{
	int access1_n, access2_n, write_n = 0, fd1, fd2,
	read_n = 0, write_n_tmp;
	char buffer[1024];

	access1_n = access(file1, F_OK);
	access2_n = access(file2, F_OK);

	if (access1_n != 0)
	{
		err_file_read(file1, 98);
	}
	else
	{
		fd1 = open(file1, O_RDONLY);
		if (fd1 == -1)
			err_file_read(file1, 98);
	}

	if (access2_n == 0)
		fd2 = open(file2, O_WRONLY | O_TRUNC);
	else
		fd2 = open(file2, O_WRONLY | O_CREAT, 0664);
	while ((read_n = read(fd1, buffer, sizeof(buffer))) > 0)
	{
		write_n_tmp = dprintf(fd2, "%s", buffer);
		if (write_n_tmp == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file2);
			exit(99);
		}
		write_n += write_n_tmp;
	}

	if (read_n == -1)
		err_file_read(file1, 98);
	handle_close_err(fd1, 100);
	handle_close_err(fd2, 100);
}

/**
  * err_file_read - an error handler function
	* for read operations on file descriptors
  * @file: parameter of type const char *.
  * @code: parameter of type int .
  * Return: void .
 */
void err_file_read(const char *file, int code)
{
	dprintf(2, "Error: Can't read from file %s\n", file);
	exit(code);
}

/**
  * handle_close_err - an error handler function
	* for close operations on file descriptors
  * @fd: parameter of type const char *.
  * @code: parameter of type int .
  * Return: void .
 */
void handle_close_err(ssize_t fd, int code)
{
	if (close(fd) != -1)
		return;
	dprintf(2, "Error: Can't close fd %u", (unsigned int)fd);
	exit(code);
}
