#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10;

int main(){

	//Definiendo una matriz.

	int matriz[][3] = {{1,0,1},{0,1,0},{1,0,1}};

	for (int r = 0; r < 3; r++){
		for (int c = 0; c < 3; c++)
			printf("%d\t", matriz[r][c]);
		puts("");
	}

	//Llenando una matriz.

	puts("");
	int matriz2[3][3];

	srand(time(NULL));

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matriz2[i][j] = rand() % 10 + 1;
			printf("%d\t", matriz2[i][j]);		
		}
		puts("");
	}

	char cadenas[3][15];

	for (int i = 0; i < 3; i++)
	{
		/*scanf("%s", &cadenas[i]);/*El especificador %s va leyendo cada caracter y en
		cuanto encuentre un espacio en blanco termina la lectura y regresa la cadena leida
		hasta antes de ese espacio.
		Sin embargo para este ejemplo como se trata de un arrego de arreglos, si
		almacenara las cadenas, hasta que se llene por completo el arreglo de arreglos.*/
		scanf("%[^\n]%*c", &cadenas[i]);
		/*[caracteres]<-Set de caracteres.
		^ El acento circunflejo que coloque dentro edl set de caracteres indica negacion
		"toma todos los caracteres y donde encuentre "x" caracter termina la ejecucion.
		* El asterisco simboliza consume el dato pero no lo almacenes hasta terminar la
		lectura.*/
	}

	for (int i = 0; i < 3; i++)
	{
		//Puts imprime hasta encontar el fin de cadena, por eso unicamente se utilza para
		//cadenas.
		puts(cadenas[i]);
	}

	scanf(" "); /*Este scanf consumira todos los espacios en blanco y cuando encuentre
				un */

	/*
	scanf("%d");
	scanf("%s");
	*/
	return EXIT_SUCCESS;
}