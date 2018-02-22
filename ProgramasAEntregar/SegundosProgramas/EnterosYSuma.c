#include <stdio.h>

void main(){

	//Ejercicio 1 imprimir un numero al reves
	int num1, cont = 10, num, invert = 0;
	puts("Ingresa un numero:");
	scanf("%d", &num1);
	while(num1!=0){
		num = num1 % cont;
		num1 /= cont;
		invert = invert * 10 + num;
	}
	printf("%d\n", invert);

	//Ejercicio 2 imprimir la suma de un numero
	num = invert = 0;
	puts("Ingrese otro numero:");
	scanf("%d", &num1);
	while(num1!=0){
		num += num1 % cont;
		num1 /= cont;
	}
	printf("%d", num);
	/*/n Lee el numero de caracteres hasta antes de esa expresion
	tanto para printf como para scanf. */
}