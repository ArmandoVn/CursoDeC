#include<stdio.h>
#include<stdlib.h>

int main(){
	char character;
	int num, aux = 1; //Cero es negro.

	puts("Ingresa las coordenadas:");
	scanf("%c%d", &character, &num);
	printf("%c\n", character);

	for (int i = 97; i < 122; i++){
		for (int j = 1; j <= 8; j++)
		{
			if (aux == 0)
				aux++;
			else
				aux--;
			if (character == i && num == j)
			{
				printf("\nEl color de la casilla es: %d", aux);				
			}
		}
	}
}