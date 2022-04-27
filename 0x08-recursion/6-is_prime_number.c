#include "main.h"
#include <stdio.h>
/**
 * is_prime_number  -  fuction to find prime
 * @n: number
 * Return: 0 if not prime, 1 if prime
 */
int is_prime_number(int n)
{
int i = 1;

int check = 0;
if (i <= n)
{
if (n % i == 0)
{
check = check + 1;
}
i = i + 1;
}
if (check == 2)
{
return (1);
}
else
{
return (0);
}
}

