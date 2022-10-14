/*
 * Programm zur Erläuterung von Benutzereingaben
 */

#include <stdio.h>

int main(void)
{
	char name[25];
	int alter;

	printf("Wie ist dein name?\n");
	//scanf("%s", &name);
	fgets(name, 25, stdin);

	printf("Wie alt bist du?\n");
	scanf("%d", &alter);

	printf("Hallo %s, wie geht es dir?\n", name);
	printf("Du bist %d Jahre alt.", alter);

	return 0;
}

