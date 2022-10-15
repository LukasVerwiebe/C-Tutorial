/*
 * Taschenrechner Programm für die Berechnung von (+ - * /)
 */

#include <stdio.h>

int main(void)
{
	char operator;
	double num1;
	double num2;
	double ergebnis;

	printf("\nGib den Operator an (+ - * /):");
	scanf("%c", &operator);

	printf("Gib die erste Nummer ein:");
	scanf("%lf", &num1);

	printf("Gib die zweite Nummer ein:");
	scanf("%lf", &num2);

	switch (operator)
	{
	case '+':
		ergebnis = num1 + num2;
		printf("\nErgebnis: %.2lf", ergebnis);
		break;
	case '-':
		ergebnis = num1 - num2;
		printf("\nErgebnis: %.2lf", ergebnis);
		break;
	case '*':
		ergebnis = num1 * num2;
		printf("\nErgebnis: %.2lf", ergebnis);
		break;
	case '/':
		ergebnis = num1 / num2;
		printf("\nErgebnis: %.2lf", ergebnis);
		break;
	default:
		printf("%c ist kein Valider Operator!", operator);
	}

	return 0;
}
