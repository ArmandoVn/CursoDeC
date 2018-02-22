#include<stdio.h>
#include<stdlib.h>

int main(){
	int num, max, change=0;

	puts("Ingresa un numero:");
	scanf("%d", &num);
	max = num;
	while(num != 0){
		scanf("%d", &num);
		if (num > max)
		{
			printf("^Update\n");
			max = num;
			change++;
		}
	}

	printf("Te maximun value is: %d\n", max);
	printf("The maximun value was update %d times\n", change);
	return EXIT_SUCCESS;
}