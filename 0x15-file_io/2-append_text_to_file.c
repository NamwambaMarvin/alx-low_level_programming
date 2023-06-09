#include "main.h"
/**
 * append_text_to_file - Append text to the end of the file
 * @text_content: Text content to be appended to the end of the text file
 * @filename: Name of the file to be appended to
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;

	if (!filename)
	{
		return (-1);
	}
	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		if (write(file_desc, text_content, strlen(text_content)) == -1)
			return (-1);
	}
	close(file_desc);
	return (-1);
}
