/*
 * Programm zur Erläuterung von Konstanten
 */

#include <stdio.h>

#define PI 3.14159

int main(void)
{
	const int monate = 12;

	printf("%f", PI);
	printf("\nDas Jahr hat %d Monate.", monate);
	return 0;
}

