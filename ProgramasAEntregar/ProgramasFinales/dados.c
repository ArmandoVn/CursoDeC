#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>//Libreria para usar valores booleanos.

int main(){
	char jugador1[20], jugador2[20], opcion[3];
	int tiradas;
	puts("Ingresa los datos de acuerdo al formato:");
		scanf("%s%s%s", jugador1, jugador2, opcion);
		fflush(stdin);
		scanf("%d", &tiradas);
		int resultados[tiradas];
		for (int i = 0; i < tiradas; i++)
		{
			scanf("%d", &resultados[tiradas]);
		}
		for (int i = 0; i < tiradas; i++)
		{
			if ((resultados[i]%2) == 0)
			{
				/* code */
			}
		}
	return EXIT_SUCCESS;
}