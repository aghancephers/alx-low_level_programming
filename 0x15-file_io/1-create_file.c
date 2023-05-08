#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function succeeds - 1.
 *         If the function fails - -1.
 */
int create_file(const char *filename, char *text_content)
{
int fd, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len]; len++)
;
}

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (write(fd, text_content, len) != len)
{
close(fd);
return (-1);
}

if (close(fd) == -1)
return (-1);

return (1);
}
