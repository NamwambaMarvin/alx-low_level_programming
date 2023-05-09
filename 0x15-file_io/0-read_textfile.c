#include "main.h"
/**
 * read_textfile - Reads a text file and print it ot out put
 * @filename: Name of the file to be opened
 * @letters: number of characters in the file
 * Return: Actual number of characters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rletters, file_desc;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	buffer = malloc(sizeof(char *) * letters);
	if (!buffer)
	{
		return (0);
	}
	file_desc = open(filename, O_RDONLY, 0444);
	if (file_desc == -1)
	{
		return (0);
	}
	rletters = read(file_desc, buffer, letters);
	write(STDOUT_FILENO, buffer, rletters);
	free(buffer);
	close(file_desc);
	return (rletters);
}
