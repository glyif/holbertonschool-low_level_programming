/**
 * _find_natural - finds natural sqrt
 * @a: number to find sqrt
 * @b: sqrt number
 *
 * Return: depends
 */

int _find_natural(int a, int b)
{
	if (a < 0)
		return (-1);
	else if (a == 0)
		return (1);

	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (_find_natural(a, b + 1));
}

/**
 * _sqrt_recursion - square root of a number
 * @n: number
 *
 * Return: square root of the n, if no square root, -1
 */

int _sqrt_recursion(int n)
{

	return (_find_natural(n, 1));


}
