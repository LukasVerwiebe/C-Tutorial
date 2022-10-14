/*
 * Programm zur Erläuterung von Variablen
 */

#include <stdio.h>

int main()
{
	int x;			// Variable Deklarieren
	x = 123;		// Variable Initialisieren
	int y = 321;		// Variablen Deklaration und Initialisierung

	int alter = 21;		// Integer
	float note = 2.22;	// Fließkommazahl
	char buchstabe = 'C';	// Einzelnes Zeichen
	char name[] = "Lukas";	// Zeichenkette

	printf("Du bist alter %d jahre alt.\n", alter);
	printf("Du hast eine %f in der Klausur geschrieben.\n", note);
	printf("Du hast eine %6.1f in der Klausur geschrieben.\n", note);
	printf("Dies ist der Buchstabe %c.\n", buchstabe);
	printf("Dein Name ist %s.\n", name);
	return 0;
}

