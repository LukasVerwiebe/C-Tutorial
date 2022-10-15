/*
 * Programm zur Erläuterung des Ternary Operators
 */

#include <stdio.h>

int findMax(int x, int y)
{
	return (x > y) ? x : y;
}

int main(void)
{
	int max = findMax(3, 4);

	printf("%d", max);
	return 0;
}
