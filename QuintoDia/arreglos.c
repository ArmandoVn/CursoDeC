#include <stdio.h>
#include <stdlib.h>
#include<time.h>

//Las constantes simbolicas "DEFINE" se resuelven en tiempo de preprocesamieto, antes de compilar.
/*Arreglo tipo compuesto*/
int main(){
	/*Recordar que los "[]" son operadores y junto con los "()" tinen la
	mayor precedenica dentro de estos.

	Dependiendo el numero de corchectes que tengamos en nuetro arregl, sera el numero
	de dimensiones de las que se tratara.
	Dentro de los corchetes se coloca el numero de elementos que tendra la dimension.

	Si no inicializo los elementos del arreglo, estos se inicializaran con el valor de 0.

	Los arreglos se inicializan en tiempo de compilacion.*/
	int arreglo[10];

	int elementos;
	printf("Dame el tamaño del elemento:\n");
	scanf("%d",&elementos);

	int arreglo2[elementos];

	//srand define el valor "base" de rand, para de esta forma generar numeros "pseudo"
	//aleatorios.
	//srand(4);
	srand(time(NULL)); //time(NULL); regresa la hora actual del sistema en milisegundos,
					   //recibe como argumento un apuntador a la variable donde se
					   //almacenara la hora.

	puts("Ingresa los valores:");
	for (int i = 0; i < elementos; i++)
		//scanf("%d", &arreglo2[i]);
		arreglo2[i] = rand() % 11;/*So coloca el modulo porque de esta forma divide
								  el numero devuelto por rand() y lo divide entre 11
								  para este ejemplo 11/125*/

	for (int i = 0; i < elementos; i++)
		printf("%d\n",arreglo2[i] );

	return EXIT_SUCCESS;
}