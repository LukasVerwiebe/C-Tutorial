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

	return 0;
}
