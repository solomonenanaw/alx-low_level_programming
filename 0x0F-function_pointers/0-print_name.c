#include <stdio.h>
#include "function_pointers.h" 

/**
 * print_name - Print a name from the function pointer
 * @name: char name
 * @f: function pointer that inputs string argument
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
