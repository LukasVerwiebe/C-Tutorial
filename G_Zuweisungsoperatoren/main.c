/*
 * Programm zur Erläuterung von Zuweisungsoperatoren
 */

#include <stdio.h>

int main(void)
{
	int x = 10;

	x = x + 2;
	x += 2;

	// x = x - 3;
	// x -= 3;

	// x = x * 4;
	// x *= 4;

	// x = x / 5;
	// x /= 5;

	// x = x % 2;
	// x %= 2;

	printf("%d", x);
	return 0;
}

