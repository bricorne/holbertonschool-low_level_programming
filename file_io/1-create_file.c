#include "main.h"

/**
  * create_file - function that creates a file
  * @filename: file name
  * @text_content: text
  * Return: 1 or -1
  */

int create_file(const char *filename, char *text_content)
{
	int fo, i = 0;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fo < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		write(fo, text_content, i);
	}
	close(fo);

	return (1);
}
