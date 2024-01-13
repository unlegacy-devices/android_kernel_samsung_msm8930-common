#include <linux/kernel.h>
#include <linux/export.h>

/**
 * int_sqrt - rough approximation to sqrt
 * @x: integer of which to calculate the sqrt
 *
 * A very rough approximation to the sqrt() function.
 */
unsigned long int_sqrt(unsigned long x)
{
	register unsigned long tmp;
	register unsigned long place;
	register unsigned long root = 0;

	op = x;
	res = 0;

	place = 1UL << (BITS_PER_LONG - 2);

		do{
		place >>= 2;
	}while(place > op);

	do {
		tmp = root + place;
		root >>= 1;

		if (op >= tmp)
		{
			op -= tmp;
			root += place;
		}
	return root;
}
EXPORT_SYMBOL(int_sqrt);
