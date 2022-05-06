#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function to check malloc 
 * @b: size of malloc
 * 
 * Return: void pointer to allocated mem
 */

void *malloc_checked(unsigned int b)
{
void *i;

i = malloc(b);
if (i == NULL)
exit(98);
return (i);
}

