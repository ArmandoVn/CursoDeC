#include<stdio.h>
#include <stdlib.h>

int main(){
	int num; 
	double res = 1, aux;

	puts("Ingresa el numero a calcular de la serie:");
	scanf("%d", &num);

	printf("1");
	for (int i = 2; i <= num; ++i)
	{	
		if (i%2==0)
		{
			printf("-1/%d",i*11);
			aux = (double)1/(i*11);
			res -= aux;
		}
		else{
			printf("+1/%d",i*11);
			aux = (double)1/(i*11);
			res += aux;
		}
	}

	printf("\nEl resultado de la serie es: %f", res);
}