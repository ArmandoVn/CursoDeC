#include<stdio.h>
#include<stdlib.h>

int charToInt(char);

int main(){

	int row, column;
	char c;

	scanf("%c%d", &c, &row);
	column = charToInt(c);

	if (column % 2 == 0 && row % 2 == 0 || column % 2 != 0 && row % 2 != 0)
		printf("La casilla es negra!");
	else
		printf("la casilla es blanca!");

	return EXIT_SUCCESS;
}

int charToInt(char c){
	switch(c){
		case 'a':
			return 1;
		case 'b':
			return 2;
		case 'c':
			return 3;
		case 'd':
			return 4;
		case 'e':
			return 5;
		case 'f':
			return 6;
		case 'g':
			return 7;
		case 'h':
			return 8;
	}
}