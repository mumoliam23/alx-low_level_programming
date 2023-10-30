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
int fd;
int nletters;
ssize_t bytes_written;

if (!filename)
	return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (fd == -1)
	return (-1);
if (!text_content)
	text_content = "";
for (nletters = 0; text_content[nletter]; nletters++)
	;
bytes_written = write(fd, text_content, nletters);

close(fd);
return (1);
}
