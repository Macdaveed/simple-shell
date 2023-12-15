#include <stdio.h>

/**
 * add_num - a program that add two numbers
 * @a: first integer
 * @b: second interger
 * @sum: the result from the sum.
 * Return: sum of the two integers.
 */

int add_num(int a, int b, char sum)
{

	sum = a + b;
	printf("sum is: %d\n", sum);
	return (sum);
}
