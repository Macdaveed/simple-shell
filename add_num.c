#include <stdio.h>

/**
 * add_num - a program that add two numbers
 * @a: first integer
 * @b: second interger
 * Return: sum of the two integers.
 */

int add_num(int a, int b)
{
	int sum;

	sum = a + b;

	printf("sum is: %d\n", sum);
	return (sum);
}
