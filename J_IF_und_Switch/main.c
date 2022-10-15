/*
 *
 */

#include <stdio.h>

int main(void)
{
	int alter;

	printf("\nGib dein Alter ein:");
	scanf("%d", &alter);

	if(alter >= 18)
	{
		printf("Du bist nun angemeldet!");
	}
	else if(alter == 0)
	{
		printf("Du kannst dich nicht anmelden da du gerade erst geboren wurdest!");
	}
	else if(alter < 0)
	{
		printf("Du wurdest noch nicht geboren!");
	}
	else
	{
		printf("Du bist zu jung um dich anzumelden!");
	}


	int note;

	printf("\nGib eine Note ein:");
	scanf("%d", &note);

	switch(note)
	{
	case '1':
		printf("Sehr gut\n");
		break;
	case '2':
		printf("Gut\n");
		break;
	case '3':
		printf("Befriedigent\n");
		break;
	case '4':
		printf("Ausreichend\n");
		break;
	case '5':
		printf("Mangelhaft\n");
		break;
	default:
		printf("Dabei handelt es sich nicht um eine gültige Note!");
	}

	return 0;
}
