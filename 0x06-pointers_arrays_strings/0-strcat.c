/**
 * strcat the function that concatenete two strings
 * @des pointer to the destination input
 * @src pointer to the destination input
 * Return a pointer string values of @dest 
 */
#include "main.h"

char *_strcat(char *dest, char *src)

{
int a,b;

while (dest[a])
a++;

for (b = 0; src[b]; b++)
dest[a++] = src[b];

return (dest);
}
