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
int file, app_status, words = 0;

if (filename == NULL)
return (-1);

file = open(filename, O_APPEND | O_WRONLY);
if (file == -1)
return (-1);
if (text_content)
{
while (text_content[words] != '\0')
words++;
app_status = write(file, text_content, words);
if (app_status == -1)
return (-1);
}
close(file);
return (1);
}

