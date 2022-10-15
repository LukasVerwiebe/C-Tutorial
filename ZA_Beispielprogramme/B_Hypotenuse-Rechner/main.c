/*
 * Programm zur Berechnung der Hypotenuse
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
	double A;
	double B;
	double C;

	printf("Eingabe von Seite A:");
	scanf("%lf", &A);

	printf("Eingabe von Seite B:");
	scanf("%lf", &B);

	C = sqrt(A * A + B * B);

	printf("Seite C: %lf", C);

	return 0;
}
