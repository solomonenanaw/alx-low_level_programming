#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - copyies strings as parameter
 * @str: string to duplicate
 * Return: NuLL for error copy string if success
 */

char *_strdup(char *str)
{
unsigned int a, len;
char *ptr;

if (!str)
return (NULL);
for (len = 0; str[len]; len++)
;
ptr = (char *)malloc(len * sizeof(char) + 1);
if (!ptr)
return (NULL);
for (a = 0; a <= len ; a++)
ptr[a] = str[a];
return (ptr);
}

