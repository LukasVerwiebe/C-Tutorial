/*
 * Programm zur Erläuterung der Funktionsweise von Arrays
 */

#include <stdio.h>
#include <string.h>

void sort(int array[], int size);
void printArray(int array[], int size);

int main()
{
	// Array = a data structure that can store many values of the same data type.

	double preis[10] = {5.0, 10.0, 15.0, 25.0, 20.0};

	preis[5] = 55.0;
	preis[6] = 65.0;
	preis[7] = 75.0;
	preis[8] = 85.0;

	printf("$%.2lf\n", preis[4]);

	// Ausgabe eines Arrays mittels einer For-Schleife:
	double preis2[] = {5.0, 10.0, 15.0, 25.0, 20.0};
	printf("%d bytes\n", sizeof(preis2));

	for(int i = 0; i < sizeof(preis2) / sizeof(preis2[0]); i++)
	{
		printf("$%.2lf\n", preis2[i]);
	}

	// 2D array = an array, where each element is an entire array
	//				useful if you need a matrix, grid, or table of data

	int nummer[2][3] = {
			{1,2,3},
			{4,5,6}
	};

	int nummern[3][3];
	int rows = sizeof(nummern)/ sizeof(nummern[0]);
	int columns = sizeof(nummern[0])/ sizeof(nummern[0][0]);

	printf("rows: %d\n", rows);
	printf("Columns: %d\n", columns);

	nummern[0][0] = 1;
	nummern[0][1] = 2;
	nummern[0][2] = 3;
	nummern[1][0] = 4;
	nummern[1][1] = 5;
	nummern[1][2] = 6;
	nummern[2][0] = 7;
	nummern[2][1] = 8;
	nummern[2][2] = 9;

	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns; j++)
		{
			printf("%d ", nummern[i][j]);
		}
		printf("\n");
	}

	// Array of Strings

	char autos[][10] = {"Mustang", "Corvette","Camaro"};
	strcpy(autos[0], "Tesla");

	for(int i = 0; i < sizeof(autos)/ sizeof(autos[0]); i++)
	{
		printf("%s\n", autos[i]);
	}

	// Swap values of two variables
	// Bsp. 1
	char x = 'X';
	char y = 'Y';
	char temp;

	temp = x;
	x = y;
	y = temp;

	printf("x = %c\n", x);
	printf("y = %c\n", y);

	// Bsp. 2
	char a[] = "water";
	char b[] = "lemonade";
	char tempo[15];

	strcpy(tempo, a);
	strcpy(a, b);
	strcpy(b, tempo);

	printf("x = %s\n", a);
	printf("y = %s\n", b);

	// Sort an array
	int array[] = {9, 1,8,2,7,3,6,4,5};
	int size = sizeof(array)/ sizeof(array[0]);

	sort(array, size);
	printArray(array, size);

	return 0;
}

void sort(int array[], int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1; ++j)
		{
			if(array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

void printArray(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", array[i]);
	}
}
