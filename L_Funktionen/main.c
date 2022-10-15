/*
 * Programm zur Erläuterung von Funktionen
 */

#include <stdio.h>

// Funktion zum Wiederholen von Texten
void geburstag()
{
	printf("\nHappy birthday to you!");
	printf("\nHappy birthday to you!");
	printf("\nHappy birthday dear...");
	printf("\nHappy birthday to you!\n");
}

// Funktion mit Übergabewerten
void geburstagNameAlter(char name[], int alter)
{
	printf("\nHappy birthday dear %s", name);
	printf("\nDu bist %d Jahre alt!", alter);
}

// Funktion mit Rückgabewert
double wurzel(double x)
{
	return x * x;
}

int main(void)
{
	char name[] = "Lukas";
	int alter = 24;
	double x = wurzel(3.14);
	printf("Wurzel: %lf\n", x);

	geburstag();
	geburstag();
	geburstagNameAlter(name, alter);

	return 0;
}
