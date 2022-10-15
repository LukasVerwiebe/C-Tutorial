/*
 * Programm zur Erläuterung von String Funktionen
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char string1[] = "Lukas";
	char string2[] = "Programm";

	//strlwr(string1); 								// wandelt einen String in Lowercase um
	//strupr(string1);								// wandelt einen String in Uppercase um
	//strcat(string1, string2);						// hängt string2 an das Ende von string1 an
	//strncat(string1, string2, 1);					// hängt n Zeichen von string2 an string1 an
	//strcpy(string1, string2);						// kopiere string2 nach string1
	//strncpy(string1, string2, 4);					// kopiere n Zeichen von string2 nach string1

	//strset(string1, '?'); 						// setzt alle Zeichen einer Zeichenkette auf ein gegebenes Zeichen
	//strnset(string1, 'x', 1);						// setzt die ersten n Zeichen einer Zeichenkette auf ein gegebenes Zeichen
	//strrev(string1);								// eine Zeichenfolge umkehren

	//int ergebnis = strlen(string1);				// gibt die Stringlänge als int zurück
	int ergebnis = strcmp(string1, string2);		// String vergleicht alle Zeichen
	//int ergebnis = strncmp(string1, string2, 1);	// String vergleicht n Zeichen
	//int ergebnis = strcmpi(string1, string1);		// String vergleicht alle Zeichen (Ignoriere Groß- und Kleinschreibung)
	//int ergebnis = strnicmp(string1, string1, 1);	// String vergleicht n Zeichen (Ignoriere Groß- und Kleinschreibung)

	printf("%s\n", string1);
	printf("%d\n", ergebnis);

	if(ergebnis == 0)
	{
		printf("Die Strings sind gleich");
	}
	else
	{
		printf("Die Strings sind nicht gleich");
	}
	return 0;
}

