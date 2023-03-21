#include "main.h"
/**
 * append_text_to_file - Appends text to a file
 * @fn: Pointer to file name
 * @tc: String to add to end of file
 * Return: -1 if failure or 1
*/
int append_text_to_file(const char *fn, char *tc)
{
int o, w, len = 0;
if (fn == NULL)
return (-1);
if (tc != NULL)
{
for (len = 0; tc[len];)
len++;
}
o = open(fn, O_WRONLY | O_APPEND);
w = write(o, tc, len);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
