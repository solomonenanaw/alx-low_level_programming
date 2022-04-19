#include "main.h"

/**
* _strlen - length os string
* @s:char
* Return:int
*/


int _strlen(char *s)
{
int i = 0;

char str = "My first strlen!";
while (s[i] != '\0')
i++;
return (i);
}

