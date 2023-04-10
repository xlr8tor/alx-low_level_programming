#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of the file
 * @letters: letters is the number of letters it should read and print
 *
 * Return: int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fdesc;
	ssize_t write_handle, read_handle;

	if (!filename)
		return (0);

	fdesc = open(filename, O_RDONLY);
	if (fdesc < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
	{
		close(fdesc);
		return (0);
	}

	read_handle = read(fdesc, buffer, letters);
	if (read_handle <= 0)
	{
		close(fdesc);
		free(buffer);
		return (0);
	}

	write_handle = write(STDOUT_FILENO, buffer, read_handle);
	if (write_handle < read_handle)
	{
		close(fdesc);
		free(buffer);
		return (0);
	}
	close(fdesc);
	free(buffer);
	return (read_handle);

}
