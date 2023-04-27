/**
 *_sqrt - returns the natural square root of a number
 *@n: num
 *@m: square
 *Return: square
 */
int _sqrt(int n, int m)
{
	if (n < 0 || m * m > n)
	{
		return (-1);
	}
	if (m * m == n)
	{
		return (m);
	}
	else
	{
		return (_sqrt(n, m + 1));
	}
}
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: num
 *Return: square
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 0));
}
