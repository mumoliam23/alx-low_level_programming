#include "main.h"

/**
 * create_file - Create a file with the given content.
 * @filename: The name of the file to be created.
 * @text_content: The content to be written to the file.
 *
 * Return: 1 if successful, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file, write_status, words = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;

		write_status = write(file, text_content, words);
		if (write_status == -1)
			return (-1);
	}

	close(file);
	return (1);
}
