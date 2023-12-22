#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	int i, y;
	char *buffer;
	if (!filename)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	i = read(file_d, buffer, letters);
	if (i < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[i] = '\0';
	close(file_d);
	y = write(STDOUT_FILENO, buffer, i);
	if (y < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (y);
}
