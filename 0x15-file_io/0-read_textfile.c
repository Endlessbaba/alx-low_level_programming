#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints the letters to STDOUT
 * @filename: text file to br read
 * @letters: numbers of letters to be read.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
char *buffer;
ssize_t bytes_read, bytes_written;
if (filename == NULL)
{
return (0);
}
file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
buffer = (char *) malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
close(file);
return (0);
}
bytes_read = read(file, buffer, letters);
if (bytes_read == -1)
{
close(file);
free(buffer);
return (0);
}
buffer[bytes_read] = '\0';
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(file);
free(buffer);
return (0);
}
close(file);
free(buffer);
return (bytes_written);
}
