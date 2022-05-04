#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * Create_array - creates an array of chars
 * @c: specifies char 
 * @size: size of the array
 * Return: Null or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;
if (size == 0)
return (Null);
s = (char *)malloc(size * sizeof(char));
if (s == 0)
return (Null);
for (i = 0; i < size; i++)
S[i] = c;
return (c);
}
