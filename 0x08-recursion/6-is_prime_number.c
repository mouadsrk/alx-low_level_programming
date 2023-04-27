/**
 *is_prime - is a prime number
 *@n: num1
 *@m: num2
 *Return: 0 or 1
 */
int is_prime(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}
	if ((n % m == 0 && m > 0) || n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, m - 1));
	}
}
/**
 *is_prime_number - returns the natural square root of a number
 *@n: num
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
return (is_prime(n, n - 1));
}
