#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - function returns a pointer to a new string 
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
ptr = (char *)malloc(len * sizeof(char));
if (!ptr)
return (NULL);
for (a = 0; a <= len ; a++)
ptr[a] = str[a];
return (ptr);
}

