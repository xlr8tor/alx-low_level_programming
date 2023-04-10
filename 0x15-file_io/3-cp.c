#include "main.h"
/**
 * on_error - print error message and exit the program
 * @err_code: error code
 * @format: error message to print
 */
void on_error(int err_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(err_code);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 || 99 || 100
 */
int main(int argc, char *argv[])
{
	int fdesc_source, fdesc_dest, w, r;
	char buffer[BUFFER_SIZE];
	const char *source, *destination;

	if (argc != 3)
		on_error(97, "Usage: cp file_from file_to");

	source = argv[1];
	destination = argv[2];

	fdesc_source = open(source, O_RDONLY);
	fdesc_dest = open(destination, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fdesc_source < 0)
		on_error(98, "Error: Can't read from file", source);

	if (fdesc_dest < 0)
		on_error(99, "Error: Can't write to", destination);

	while ((r = read(fdesc_source, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fdesc_dest, buffer, r);
		if (w < 0)
			on_error(99, "Error: Can't write to %s", destination);
	}
	if (r < 0)
		on_error(98, "Error: Can't read from file %s", source);

	if (close(fdesc_source) < 0)
		on_error(100, "Error: Can't close fd %d", fdesc_source);

	if (close(fdesc_dest) < 0)
		on_error(100, "Error: Can't close fd %d", fdesc_dest);
	return (0);
}
