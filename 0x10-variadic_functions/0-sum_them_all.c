#include <stdio.h>
#include "variadic_functions.h"
int sum_them_all(const unsigned int n, ...)
{
int sum;
sum = 0;
int i ;
va_list ap;
Va_start (ptr, n)
for (i = 0; i < n; i++)
sum += va_arg(ptr , int);
va_end(ptr);
return sum;
}

