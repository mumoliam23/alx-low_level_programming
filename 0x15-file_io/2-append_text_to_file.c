#include "main.h"

/**
 * append_text_to_file - Append text at the end of a file.
 * @filename: The name of the file to which text is appended.
 * @text_content: The ocntent to be added to the file.
 *
 * Return: 1 if successful, -1 if the file does not exist or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int nletters;
ssize_t bytes_written;

if (!filename)
	return (-1);
fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
	return (-1);
if (text_content)
{
for (nletters = 0; text_content[nletters]; nletters++)
	;
bytes_written = write(fd, text_content, nletters);

if (bytes_written == -1)
	return (-1);
}
clode(fd);
return (1);
}

