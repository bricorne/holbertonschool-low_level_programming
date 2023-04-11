#include "main.h"

/**
  * read_textfile - reads text file and prints it to the POSIX standard output
  * @filename: the name of the file
  * @letters: the number of letters it should read and print
  * Return: number of letters or 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo, fr, fw;
	char *temp;

	temp = malloc(sizeof(char) * letters);

	if (temp == NULL)
		return (0);
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
