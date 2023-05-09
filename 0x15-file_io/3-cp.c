#include "main.h"
/**
 * copy - Copies contents of one file from one directory to another.
 * @source: Source of the files
 * @destination: Destindaton of the files
 */
void copy(char *source, char *destination)
{
	int src_file_desc, dest_file_desc, rletters;
	char buffer[1024];

	src_file_desc = open(source, O_RDONLY);
	if (!source || src_file_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		exit(98);
	}
	dest_file_desc = open(destination, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (rletters = read(src_file_desc, buffer, 1024) > 0)
	{
		if (write(dest_file_desc, buffer, rletters) != rletters
				|| dest_file_desc == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination);
			exit(99);
		}
	}
	if (rletters == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		exit(98);
	}
	if (close(dest_file_desc) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_file_desc);
		exit(100);
	}
	if (close(src_file_desc) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_file_desc);
		exit(100);
	}
}
/**
 * main - Prints performs the copy
 * @argc: Number of arguments passed to the function
 * @argv: Arguments paseed to the function
 * Return: o on suceess
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy(argv[1], argv[2]);
	exit(0);
}
