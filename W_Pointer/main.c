/*
 * Programm zur Erläuterung der Funktionsweise von Pointer
 */

#include <stdio.h>

void printAge(int *pAge);

void printAge(int *pAge)
{
	printf("You are %d years old", *pAge);
}

int main()
{
	/*
	 * pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
	 * 			some tasks are performed more easily with pointers
	 * 			* = indirection operator (value at address)
	 */

	int age = 21;
	int *pAge = NULL;
	pAge = &age;

	printf("address of age: %p\n", &age);
	printf("value of pAge: %p\n", pAge);

	printf("size of age: %d bytes\n", sizeof(&age));
	printf("size of pAge: %d bytes\n", sizeof(pAge));

	printf("value of age: %d\n", age);
	printf("value at stored address: %d\n", *pAge); // dereferencing

	printAge(pAge);

	return 0;
}
