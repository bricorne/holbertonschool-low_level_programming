#include "main.h"
/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: input
 * @text_content: input
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fld, i = 0, wr;

	if (!filename)
	{
		return (-1);
	}
	fld = open(filename, O_CREAT | O_APPEND | O_RDWR);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		wr = write(fld, text_content, i);
	}
	if (wr == -1 || fld == -1)
	{
		return (-1);
	}
	close(fld);

	return (1);
}
