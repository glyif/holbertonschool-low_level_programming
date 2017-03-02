/**
 * _calculator - calculates
 * @a: number
 * @b: starting number
 *
 * Return: 1 if prime, 0 if not
 */

int _calculator(int a, int b)
{
	if (a == b)
		return (1);
	else if ((a < b) && (b % a == 0))
		return (0);
	else if (a < b && b % a != 0)
		return (_calculator(a + 1, b));
	else
		return (0);
}
/**
 * is_prime_number - checks if prime number or not
 * @n: number
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (_calculator(2, n));
}
