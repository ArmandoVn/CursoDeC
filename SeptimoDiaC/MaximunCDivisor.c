#include <stdio.h>
#include <stdlib.h>

int MCD(int, int);

int main(){
	int numerator, denominator, MCD1;
	puts("Ingresa el numeradaor y denominador:");
	scanf("%d%d", &numerator, &denominator);

	MCD1 = MCD(numerator, denominator);

	//printf("%d/%d\n", numerator/MCD1, denominator/MCD1);
	return EXIT_SUCCESS;
}

int MCD(int numerator, int denominator){
	int MCD = 0, res = 1, i = 2;

	if (numerator > denominator)
		res = numerator;
	else
		res = denominator;

	while(i <= res){
		if ( numerator % i == 0 && denominator % i == 0)
		{
			MCD = i;
			numerator = numerator/MCD;
			denominator = denominator/MCD;
		}
		i++;
	}
	printf("%d/%d\n", numerator/MCD, denominator/MCD);

	return MCD;
}