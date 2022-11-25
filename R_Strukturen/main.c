/*
 * Programm zur Erläuterung der Funktionsweise von Strukturen
 */

#include <stdio.h>
#include <string.h>

typedef char user[25];

struct Player
{
	char name[12];
	int score;
};

typedef struct
{
	char name[25];
	char password[12];
	int id;
} User;

struct Student
{
	char name[12];
	float gpa;
};

int main()
{
	/**
	 * struct = collection of related members ("variables") they can be of different data types
	 * listed under one name in a block of memory VERY SIMILAR to classes in other languages (but no methods)
	 */

	struct Player player1;
	struct Player player2;

	strcpy(player1.name, "Lukas");
	player1.score = 4;

	strcpy(player2.name, "Peter");
	player2.score = 5;

	printf("%s\n", player1.name);
	printf("%d\n", player1.score);

	printf("%s\n", player2.name);
	printf("%d\n", player2.score);

	/**
	 * typedef = reserved keyword that gives an existing datatype a "nickname"
	 */

	user user1 = "Lukas";

	User user2 = {"Lukas", "password123", 12345678};
	User user3 = {"Peter","password321", 21231234};

	printf("%s\n", user2.name);
	printf("%s\n", user2.password);
	printf("%d\n", user2.id);
	printf("\n");
	printf("%s\n", user3.name);
	printf("%s\n", user3.password);
	printf("%d\n", user3.id);

	// Array of structs
	struct Student student1 = {"Spongebob", 3.0};
	struct Student student2 = {"Patrick", 2.5};
	struct Student student3 = {"Sandy", 4.0};
	struct Student student4 = {"Squidward", 2.0};

	struct Student students[] = {student1, student2, student3, student4};

	for (int i = 0; i < sizeof(students)/ sizeof(students[0]); ++i)
	{
		printf("%-12s\t", students[i].name);
		printf("%.2f\n", students[i].gpa);
	}

	return 0;
}
