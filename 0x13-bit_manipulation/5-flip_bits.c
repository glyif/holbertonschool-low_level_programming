/**
 * flip_bits - gets the number of bits flipped form n to m
 * @n: initial lu int
 * @m: secondary lu int
 *
 * Return: number of bits need to flip to get from `n to `m`
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size;
	unsigned long int flipped;
	unsigned long int i;

	size = sizeof(n) * 8 - 1;

	flipped = 0;
	i = 0;

	while (i <= size)
	{
		if ((n & 1) != (m & 1))
			flipped++;

		n = n >> 1;
		m = m >> 1;

		i++;
	}

	return (flipped);

}
