#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Name of file
 * @text_content: string to add at the end of the file
 *
 * Return: 1 || -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, fdesc, open_handle;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	open_handle = open(filename, O_WRONLY | O_APPEND);
	fdesc = write(open_handle, text_content, len);

	if (open_handle == -1 || fdesc == -1)
		return (-1);

	close(open_handle);
	return (1);
}
