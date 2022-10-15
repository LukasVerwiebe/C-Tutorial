/*
 * Programm zur Berechnung des Kreisumfangs
 */

#include <stdio.h>

int main(void)
{
	const double PI = 3.14159;
	double radius;
	double kreisumfang;
	double bereich;

	printf("\nGib den Radius eines Kreises ein: ");
	scanf("%lf", &radius);

	kreisumfang = 2 * PI * radius;
	bereich = PI * radius * radius;

	printf("\nKreisumfang: %lf", kreisumfang);
	printf("\nBereich: %lf", bereich);

	return 0;
}
