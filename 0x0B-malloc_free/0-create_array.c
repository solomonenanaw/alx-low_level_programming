#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *create_array - creates an array of chars
 * @c: specifies char value
 * @size: size of the array
 * Return: Null or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;
if (size == 0)
return (NULL);
s = (char *)malloc(size * sizeof(char));
if (s == 0)
return (NULL);
for (i = 0; i < size; i++)
s[i] = c;
return (s);
}
