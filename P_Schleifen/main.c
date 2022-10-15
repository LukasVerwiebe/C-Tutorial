/*
 * Programm zur Erläuterung der Funktionsweise von Schleifen
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	// For-Schleife
	for(int i = 10; i >= 1; i-=3)
	{
		printf("%d\n", i);
	}


	char name[25];

	printf("\nWie ist dein Name?");
	fgets(name, 25, stdin);
	name[strlen(name) - 1] = '\0';

	// While-Schleife
	while(strlen(name) == 0)
	{
		printf("\nDu hast deinen Namen nicht angegeben");
		printf("\nWie ist dein Name?");
		fgets(name, 25, stdin);
		name[strlen(name) - 1] = '\0';
	}
	printf("Hallo %s", name);


	int nummer = 0;
	int sum = 0;

	// Do-While-Schleife
	do
	{
		printf("\nGib eine Nummer über 0 ein:");
		scanf("%d", &nummer);
		if(nummer > 0)
		{
			sum += nummer;
		}
	} while(nummer > 0);
	printf("Die Summe ist: %d", sum);


	int zeilen;
	int spalten;
	char symbol;

	printf("\nGibt die Anzahl der Zeilen an:");
	scanf("%d", &zeilen);

	printf("\nGibt die Anzahl der Spalten an:");
	scanf("%d", &spalten);

	scanf("%c");

	printf("\nGibt ein Symbol an:");
	scanf("%c", &symbol);

	// Verschachtelte-Schleifen
	for(int i = 1; i <= zeilen; i++)
	{
		for(int j = 1; j <= spalten; j++)
		{
			printf("%c", symbol);
		}
		printf("\n");
	}

	// Break & Continue
	for(int i = 1; i <= 20; i++)
	{
		if(i == 13)
		{
			break;
			//continue;
		}
		printf("%d\n", i);
	}

	return 0;
}
