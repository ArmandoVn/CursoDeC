#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
	int max, swap;
	scanf("%d", &max);

	int arr[max];

	srand(time(NULL));

	for (int i = 0; i < max; i++)
	{
		arr[i] = rand() % max + 1;
		//printf("D: %d\n", arr[i]);
	}

	for (int i = 0; i < max - 1; i++)
	{
		for (int j = 0; j < max - 1- i; j++)
		{
			if (arr[j] > arr[j+1]){
				swap = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swap;
			}
		}
	}

	for (int i = 0; i < max; i++)
	{
		printf("D: %d\n", arr[i]);
	}

}