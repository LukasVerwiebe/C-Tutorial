/*
 * Programm zur Erläuterung von Datentypen
 */

#include <stdio.h>

int main(void)
{
	// Einzelnes Zeichen, Platzhalter: %c
	char a = 'C';
	// Zeichenkette, Platzhalter: %s
	char b[] = "Lukas";

	// 4 bytes (32 bits für die Präzision) 6 - 7 Ziffern, Platzhalter: %f
	float c = 1.234567;
	// 8 bytes (64 bits für die Präzision) 15 - 16 Ziffern, Platzhalter: %lf
	double d = 3.123456789034535;

	// 1 byte (-128 to +127), Platzhalter %d oder %c
	char e = 100;
	// 1 byte (0 to +255), Platzhalter: %d oder %c
	unsigned char f = 255;

	// 2 bytes (-32,768 to +32,767), Platzhalter: %d
	short int g = 32767;
	// 2 bytes (0 to + 65,535), Platzhalter: %d
	unsigned short int h = 14343L;

	// 4 bytes (-2,147,483,648 to +2,147,483,647), Platzhalter: %d
	int i = 233333344;
	// 4 bytes (0 to +4,294,967,295), Platzhalter: %u
	unsigned int j = 42934242L;

	// 8 bytes (-9 Quantrillionen bis + 9 Quantrillionen), Platzhalter: %lld
	long long int k = 9222333444555666;
	// 8 bytes (0 bis + 18 Quantrillionen), Platzhalter: %llu
	unsigned long long int l = 18463636473590438;

	return 0;
}
