/*
 * Programm mit Beispiel Escape-Sequenz
 */

#include <stdio.h>

int main(void)
{
	// Neue Zeile mit \n
	printf("Neue Zeile\n");
	// Tab mit \t
	printf("1 \t 2 \t 3 \n4 \t 5 \t 6 \n7 \t 8 \t 9 \n");
	// Anzeige von "
	printf("\"Dies ist ein Test\" - Zitat: Lukas \n");
	// Anzeige von '
	printf("\'Dies ist ein Test\' - Zitat: Lukas \n");
	// Anzeige von /
	printf("\\Dies ist ein Test\\ - Zitat: Lukas \n");
	return 0;
}

