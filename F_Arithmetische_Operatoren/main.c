/*
 * Programm zur Erläuterung von Arithmetische Operatoren
 */

#include <stdio.h>

int main(void)
{
	int x = 5;
	int y = 2;

	int a = x + y;
	int b = x - y;
	int c = x * y;

	int d = x / y;
	float e = x / (float)y;

	int f = x % y;

	printf("\n%d", a);
	printf("\n%d", b);
	printf("\n%d", c);

	printf("\n%d", d);
	printf("\n%f", e);

	printf("\n%d", f);

	x++;
	printf("\n%d", x);
	x--;
	printf("\n%d", x);
	return 0;
}
