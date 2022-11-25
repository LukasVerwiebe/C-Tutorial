/*
 * Programm zur Erläuterung der Funktionsweise von Dateien
 */

#include <stdio.h>

int main()
{

	FILE *pF = fopen("C:\\Users\\Lukas\\Desktop\\test.txt", "w"); // a = append, w = write

	fprintf(pF, "\nPatrick Star");

	fclose(pF);

	/*
	if(remove("test.txt") == 0)
	{
		printf("Die Datei wurde gelöscht");
	}
	else
	{
		printf("Die Datei konnte nicht gelöscht werden");
	}
	*/

	FILE *pA = fopen("C:\\Users\\Lukas\\Desktop\\lesen.txt", "r");
	char buffer[255];

	if(pA == NULL)
	{
		printf("Die Datei kann nicht gefunden werden!\n");
	}
	else
	{
		while(fgets(buffer, 255, pA) != NULL)
		{
			printf("%s", buffer);
		}
	}




	fclose(pA);

	return 0;
}
