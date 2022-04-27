/**
 *
 * prime - helper fuction to find prime
 * @n: number
 * @d: incrementor divisor
 * Return: 0 if not prime, 1 if prime
 */

int prime(int n, int d)
{
if (n % d == 0)
return (0);
else if (prime(n, 1) < d)
return (1);
else
return (prime(n, d + 1));
}
