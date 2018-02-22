#include<stdio.h>
#include<stdlib.h>

int main(){
	int edad = 10;

	if (edad < 3)
		printf("\nEres un infante!");
	/*La diferencia entre utilizar un else if y un if es que si unicamente coloco ifs
	dentro de mi programa va a comprobar cada uno de los casos, mientras que else-if
	comprueba y si encuentra la coincidencia termian las comprobaciones.*/
	else if (edad >= 3 && edad <= 12)
	{
		printf("\nEres un nino!");
	}
	else if (edad > 12 && edad <= 59)
	{
		printf("\nEres un adulto!");
	}
	else
		printf("\nEres un adluto mayor!");
	
	switch(edad){
		case 3:
			printf("\nEres un bb!");
		break;
		case 15:
			printf("\nEres un nino!");
		break;
		case 40:
			printf("\nEres un adulto!");
		break;
		default:
			printf("\nEres un robot");
	}

	/*------------------------------------------------------------------------------------
									Continue, Break y Goto
	------------------------------------------------------------------------------------*/

	for (int i = 0; i < 10; i++)
	{
		if(i==5)
			//break;//Rompe el ciclo
			continue;//Salta a la siguiente iteracion.
		printf("\n%i", i);
	}

	/*goto por si solo no tiene nada de malo, el problema viene cunado se utiliza en
	demasia, pues comenza a generar codigo espaguetti que entre mas goto´s se utilicen,
	mas dificl de leer sera.*/

	int n, suma = 0;

	do{
		puts("\nIngresa un entero:");
		scanf("%d",&n);

		if (n==0)
		{
			printf("\nEl cero no tiene opuesto.");
			goto salir;//Nos llevara a la linea con la eiqueta "salir"
		}

		printf("\nEl opuesto es: %d", -n);
		suma += n;
	}while(n >= -10 && n <= 10);

	salir:
	printf("\nSuma: %d", suma);
	return EXIT_SUCCESS;
}