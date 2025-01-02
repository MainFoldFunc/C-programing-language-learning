#include <stdio.h>
#include <string.h>

struct Player{
	char name[20];
	int score;
};


int main (){

	struct Player player1;
	struct Player player2;

	strcpy(player1.name, "Jon");
	player1.score = 2;
	strcpy(player2.name, "Mike");
	player2.score = 4;

	printf("Player 1 name and score are:\n%s, %d\n", player1.name, player1.score);
	printf("Player 2 name and score are:\n%s, %d\n", player2.name, player2.score);

	return 0;
}
