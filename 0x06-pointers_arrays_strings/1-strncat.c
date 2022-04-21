#include "main.h"
/**
 * *_strncat - like _strcat but it will use n bytes from src
 * @dest: string to be concatenated
 * @src: string to be concatenated until n limit
 * @n: number of bytes that will be used from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int c,i;

c = 0;

/*find the size of dest array */
while (dest[c])
c++;

    /**
     * src does not need to be null terminated
     * if it contains n or more bytes
     */

for (i = 0; i<n && src[i] != '\0'; i++)
dest[c + i] = src[i];
/** null termination dest */
dest[c + i] = '\0'; 

return (dest);
}


