#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: second string to be concatenated to src
 * @src: first string to be concatenated to dest
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int a,b;

a = 0;
while (dest[a])
a++
for (b = 0; src[b]; b++)
dest[a++] = src[b];
return (dest);
}
