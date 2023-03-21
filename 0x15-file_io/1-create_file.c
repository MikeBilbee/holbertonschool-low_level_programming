#include "main.h"
/**
 * create_file - Creates a file
 * @fn: Pointer to name of a file
 * @tc: Pointer to string to write to file
 * Return: -1 if failure or 1
*/
int create_file(const char *fn, char *tc)
{
int o, w, len = 0;

if (fn == NULL)
return (-1);

if (tc != NULL)
{
for (len = 0; tc[len];)
len++;
}

o = open(fn, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(o, tc, len);

if (o == -1 || w == -1)
return (-1);

close(o);

return (1);
}
