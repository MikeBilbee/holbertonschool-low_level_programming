#include "main.h"
/**
 * read_textfile - Reads a file and prints to POSIX stdout
 * @fn: Pointer to file
 * @l: Number of letters
 * Return: Number of bytes or 0
*/
ssize_t read_textfile(const char *fn, size_t l)
{
ssize_t o, r, w;
char *buffer;

if (fn == NULL)
return (0);

buffer = malloc(sizeof(char) * l);
if (buffer ==  NULL)
return (0);

o = open(fn, O_RDONLY);
r = read(o, buffer, l);
w = write(STDOUT_FILENO, buffer, r);

if (o == -1 || r == -1 || w == -1 || w != r)
{
free(buffer);
return (0);
}
free(buffer);
close(o);
return (w);
}
