#include "main.h"

/**
  *
  *
  *
  *
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo, fr, fw;
	char *temp;

	temp = malloc(sizeof(char) * letters);

	if (temp == NULL)
		return(0);
	fo = open(filename, O_RDONLY);
	fr = read(fo, temp, letters);
	fw = write(STDOUT_FILENO, temp, fr);

	if (fo < 0 || fr < 0 || fw < 0)
	{
		free(temp);
		return (0);
	}
	close(fo);

	return (fw);
}
