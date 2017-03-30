/**
 * set_bit - sets a bit to 1 at a given index
 * @n: pointer to integer
 * @index: index to set to 1
 *
 * Return: 1 if succeeded of -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;
	unsigned long int mask;

	size = sizeof(*n) * 8 - 1;

	if (index > size)
		return (-1);

	mask = 1 << index;

	*n = mask | *n;

	return (1);
}
