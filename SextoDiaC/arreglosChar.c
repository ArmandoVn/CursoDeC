#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	// arreglo de caracteres
	char caracteres2[] = {'a', 'b', 'c'};
	/*La diferencia entre un arreglo de caracteres y una cadena es que el ultimo elemento
	de un cadena siempre sera el fin de cadena '\0', si yo quisiera imprimir el siguiente
	arreglo unicamente se imprimira hasta la b.*/
	char caracteres[] = {'a', 'b', '\0', 'c'};

	for (int i = 0; i < 3; i++)
	{
		printf("%c\n", caracteres[i]);
	}

	printf("%s\n", caracteres);

	/*En la sieguiente linea estamos asignando al arreglo un arreglo de cacteres, sin
	embargo para el compilador esto sera una cadena por que lo que hacen las comillas
	dobles automaticamente es colocar el fin de cadena, esto se resuleve en tiempo de
	compilacion.*/
	char caracteres3[]="hola";

	int i = 0;
	char c = caracteres3[i];

	while(c != '\0'){
		printf("%c", c);
		c = caracteres3[++i];
	}

	return EXIT_SUCCESS;
}