#include<stdio.h>
#include<stdlib.h>

int main(){
	int m, n, a, b;

	puts("Ingresa los renglones y las columnas de la matriz 1:");
	scanf("%d%d", &m, &n);
	puts("Ingresa los renglones y las columnas de la matriz 2:");
	scanf("%d%d", &a, &b);

	if (n != a)
	{
		puts("Operacion invalida!");
		return 1;
	}
	int matriz1[m][n], matriz2[a][b];

	puts("Ingresa los datos de la matriz 1:");
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &matriz1[i][j]);
		}

	puts("Ingresa los datos de la matriz 2:");
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
		{
			scanf("%d", &matriz2[i][j]);
		}

	puts("");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++)
			printf("%d\t", matriz1[i][j]);
		puts("");
	}
	puts("");

	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++)
		{
			printf("%d\t", matriz2[i][j]);
		}
		puts("");
	}
	puts("");


	int aux = 0;
	for (int k = 0; k < m; k++)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < b; j++)
			{
				for (int h = 0; h < m; h++)
					aux += matriz1[k][i]*matriz1[j][h];
			}
			printf("%d\t",aux);
		}
		printf("\n");

	}

}