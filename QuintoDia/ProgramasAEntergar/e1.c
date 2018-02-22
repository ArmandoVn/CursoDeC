#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	double res = 0, count = 0;

	puts("Ingresa un numero:");
	do{
		scanf("%i", &num);
		res += num;
		if (num == 0)
		{
			break;
		}
		count++;
	}while(num != 0);

	res /= count;
	printf("\nEl promedio de los numeros ingreados es: %f", res);

	return EXIT_SUCCESS;
}