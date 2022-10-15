/*
 * Programm zur Erläuterung von Prototyp Funktionen
 */

#include <stdio.h>

void hallo(char[], int); // Prototyp Funktion

int main()
{
	char name[] = "Lukas";
	int alter = 23;

	hallo(name, alter);

	return 0;
}

void hallo(char name[], int alter)
{
	printf("\nHallo %s", name);
	printf("\nDu bist %d Jahre alt", alter);
}