#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int **alloc_grid(int width, int height)
{
int **array;
int i = 0;
int j = 0;
int k = width;
int p = height;

if (width <= 0 || height <= 0)
{
return (NULL);
}

while (i < p)
{
array[i] = malloc(sizeof(int) * width);
if (array[i] == NULL)
{
for (i--; i >= 0; i--)
free(array[i]);
free(array);
return (NULL);
}
while (j < k)
{
array[i][j] = 0;
j++
}
return (array);
}int **alloc-grid(int width, int height)
{
int **array;
int i = 0;
int j = 0;
int k = width;
int p = height;

if (width <= 0 || height <= 0)
{
return (NULL);
}

while (i < p)
{
array[i] = malloc(sizeof(int) * width);
if (array[i] == NULL)
{
for (i--; i >= 0; i--)
free(array[i]);
free(array);
return (NULL);
}
while (j < k)
{
array[i][j] = 0;
j++
}
return (array);
}
