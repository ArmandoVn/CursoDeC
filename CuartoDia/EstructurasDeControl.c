#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //Libreria que propociona funciones para el control del tiempo

/*Expresiones: enunciados que regresan un valor*/
void main(){
	/*
	for (int i = 1; i < 11; i++)
	{
		printf("%d\n",i);
	}

	int i = 0;

	while(i < 10){
		printf("%d\n", ++i);
	}

	i=0;

	do{
		printf("%d\n", ++i);
	}while(i < 10);
	*/

	for (int hora = 0; hora < 24; hora++)
		for (int minuto = 0; minuto < 60; minuto++)
			for (int segundo = 0; segundo < 60; segundo++){
				printf("%d:%d:%d\n", hora, minuto, segundo);
				sleep(1);
			}
}