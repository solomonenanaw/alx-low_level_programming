
#include "main.h"
#include <string.h>
/**
 * strcat the function that concatenete two strings
 * @des pointer to the destination input
 * @src pointer to the destination input
 * Return a pointer string values of @dest 
 */
char *_strcat(char *dest, char *src)

{
int l1,l2;
int i;

l1 = dest;
l2 = src;
for (i = 0; i <= l2; i++)
{
	dest[l1] = src[i]
}

return (dest);
}
