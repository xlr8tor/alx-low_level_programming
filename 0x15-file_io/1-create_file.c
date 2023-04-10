#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: string to write to file
 *
 * Return: 1 || -1
 */
int create_file(const char *filename, char *text_content)
{
	int fdesc;
	int len = 0, write_handle;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fdesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_handle = write(fdesc, text_content, len);

	if (write_handle == -1 || fdesc == -1)
		return (-1);
	close(fdesc);
	return (1);
}
