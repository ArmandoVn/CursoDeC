/*
Declaracion de funciones: Tipo_retorno nombre(tipo-y-numero-argumentos)
Definicion: Tipo_retorno nombre(tipo nombre numero argumentos)
*/

//Fechas magicas.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

//Firma o declaracion de la funcion.
void range(int, int, int, int[]);
int size(int, int, int);
bool fecha_magica(int, int, int);
int dias_Mes(int, int);

int main(){
	/*int start, stop, step;
	scanf("%d%d%d", &start, &stop, &step);

	int array[size(start, stop, step)];
	range(start, stop, step, array);

	for (int i = 0; i < size(start, stop, step); i++)
	{
		printf("%d\t", array[i]);
	}*/

	/*int years[size(1900, 2000, 1)];
	range(1900, 2000, 1, years);

	int months[size(1, 13, 1)];
	range(1, 13, 1, months);

	int days[size(1,32, 1)];
	range(1, 32, 1, days);

	for (int y = 0; y < size(1900, 2000, 1); y++)
		for (int m = 0; m < size(1, 13, 1); m++)
			for (int d = 0; d < size(1, 32, 1); d++)
				if (fecha_magica(days[d], months[m], years[y]))
					printf("%d/%d/%d\n", days[d], months[m], years[y]);*/
	
	int month, year, daysNum;

	puts("Ingresa el mes y anio en el siguiente formato: xx/xxxx");
	scanf("%d/%d", &month, &year);

	daysNum = dias_Mes(month, year);

	int days[size(1, daysNum, 1)];
	range(1, daysNum, 1, days);

	for (int d = 0; d < size(1, daysNum, 1); d++)
				if (fecha_magica(days[d], month, year))
					printf("%d/%d/%d\n", days[d], month, year);

	return EXIT_SUCCESS;
}

//Definicion de funciones.
void range(int start, int stop, int step, int arreglo[]){
	int elementos = size(start, stop, step);

	for (int i = 0, value = start; i < elementos; i++, value += step)
		arreglo[i] = value;
}

//Generacion del tamaño del array y redondeo de numeros.
int size(int start, int stop, int step){
	return ceil((float)(stop-start)/step);
}

bool fecha_magica(int day, int month, int year){
	if (day*month == year % 100)
		return true;
	return false;
}

int dias_Mes(int month, int year){
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		return 31;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		return 30;
	}
	else if (month == 2)
	{
		if (year % 4 == 0)
		{
			printf("Es anio biciesto!\n");
			return 29;
		}
		return 28;
	}
}

/*Tarea implementar una funcion que reciba un numero de mes y numero de año y
regrese el numero de dias, para que ese valor se lo pasemos a la funcion range
y me genere valores de acuerdo a ese valor.*/