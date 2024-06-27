#include <stdio.h>

/**
 * is_prime - Check if a number is a prime number
 * @num: The number to check
 *
 * Return: 1 if @num is a prime number, otherwise 0
 */
int is_prime(long num)
{
if (num <= 1)
return (0); /* Numbers less than or equal to 1 are not prime */
if (num == 2 || num == 3)
return(1); /* 2 and 3 are prime numbers */ 
if (num % 2 == 0 || num % 3 == 0)
return (0); /* Numbers divisible by 2 or 3 are not prime */
 /* Check for prime numbers of the form 6k +/- 1 */
for (long i = 5; i * i <= num; i += 6) {
if (num % i == 0 || num % (i + 2) == 0)
return(0);
}

 return (1); /* Not a prime number if divisible by i or i + 2 */
}

/**
 * largest_prime_factor - Find the largest prime factor of a number
 * @n: The number to factorize
 *
 * Return: The largest prime factor of @n
 */
long largest_prime_factor(long n)
{
long largest_factor = 0;

/* Check for number of 2s in @n */
 
while (n % 2 == 0) {
largest_factor = 2;
n /= 2;
}

/* @n must be odd at this point, so we can skip even numbers */

for (long i = 3; i <= n; i += 2) {
while (n % i == 0) {
largest_factor = i;
n /= i;
}
}

return largest_factor;
}

int main(void)
{
long number = 612852475143;
long largest_prime;

largest_prime = largest_prime_factor(number);

printf("%ld\n", largest_prime);

return (0);
}
