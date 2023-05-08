#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: On success, 1. On failure, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, w, len = 0;

/* Check if filename or text_content is NULL */
if (filename == NULL || text_content == NULL)
return (-1);

/* Get the length of the text_content */
for (len = 0; text_content[len]; len++)
;

/* Open file for appending */
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

/* Write text_content to file */
w = write(fd, text_content, len);
if (w == -1)
{
close(fd);
return (-1);
}

/* Close file */
close(fd);

return (1);
}

