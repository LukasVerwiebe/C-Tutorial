/*
 * Programm zur Umrechnung von Temperaturen von Fahrenheit in Celsius und umgekehrt
 */

#include <stdio.h>

int main(void)
{
	char einheit;
	float temp;

	printf("\nIst die Temperatur in (F) oder (C) angegeben?:");
	scanf("%c", &einheit);

	einheit = toupper(einheit);

	if(einheit == 'C')
	{
		printf("\nGib die Temperatur in Celsius an: ");
		scanf("%f", &temp);
		temp = (temp * 9 / 5) + 32;
		printf("\nDie Temperatur ist in Fahrenheit: %.1f", temp);
	}
	else if(einheit == 'F')
	{
		printf("\nGib die Temperatur in Fahrenheit an: ");
		scanf("%f", &temp);
		temp = ((temp - 32) * 5) / 9;
		printf("\nDie Temperatur ist in Celsius: %.1f", temp);
	}
	else
	{
		printf("\n %c ist keine Valide Temperatur Einheit", einheit);
	}

	return 0;
}
