#include "main.h"
/**
 * strcat the function that concatenete two strings
 * @des pointer to the destination input
 * @src pointer to the destination input
 * Return a pointer string values of @dest 
 */
char *_strcat(char *dest, char *src)

{
int len1,len2;
int i;

len1 = *dest;
len2 = *src;
for (i = 0; i <= len2; i++)
{
	dest[len1] = src[i]
}

return (dest);
}
