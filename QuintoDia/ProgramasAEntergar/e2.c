#include<stdio.h>
#include<stdlib.h>
int main(){

	int num; 

	puts("Ingresa un numero:");
	scanf("%d", &num);
	if (num > 10)
	{
		puts("Numero no valido!");
	}else{
		printf("     ");
		for (int i = 1; i <= num; i++)
		{
			printf("%4d ", i);
		}
		printf("\n");
		for (int i = 1; i <= num; i++)
		{
			printf("%4d ", i);
			for (int j = 1; j <= num; j++)
			{
				printf("%4d ", i*j);
			}
			printf("\n");
		}
	}

	return EXIT_SUCCESS;
}