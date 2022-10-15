/*
 * Programm zur Erläuterung der Logischen Operatoren AND and OR
 */

#include <stdio.h>

int main(void)
{
	float temp = 25;

	if(temp >= 0 && temp <= 30)
	{
		printf("\nDas Wetter ist gut!");
	}
	else
	{
		printf("\nDas Wetter ist schlecht!");
	}

	float temp2 = 25;

	if(temp2 <= 0 || temp2 >= 30)
	{
		printf("\nDas Wetter ist schlecht!");
	}
	else
	{
		printf("\nDas Wetter ist gut!");
	}

	return 0;
}
