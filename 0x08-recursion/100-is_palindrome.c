#include "main.h"
#include <stdio.h>
int is_palindrome(char *s)
{
int main ()
{
int sum;
sum = is_palindrome(s);
if (s == sum)
return (1);
else
return (0);
}
is_palindrome (char *s)
static int sum = 0,r;
if (s != 0)
{
rum = s % 10;
sum = sum * 10 + r;
is_palindrome (s / 10)
}
Return (sum);
}
