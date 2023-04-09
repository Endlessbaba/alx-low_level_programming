#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: a pointer to the name of the file filename to create
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
if (filename == NULL)
{
return (-1);
}
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
size_t len = strlen(text_content);
ssize_t ret = write(fd, text_content, len);
if (ret == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
