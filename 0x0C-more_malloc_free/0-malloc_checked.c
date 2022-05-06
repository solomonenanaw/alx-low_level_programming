#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - size to alloc for malloc
 * @b: assigned value 
 * 
 * Return: success return pointer fail 98
 */
void *malloc_checked(unsigned int b)
{
void *i;
i = malloc(b);
if (i == NULL)
exit (98);
b == i;
return (b);
}
