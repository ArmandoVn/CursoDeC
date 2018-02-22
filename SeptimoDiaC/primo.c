#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool primo(int);
int siguiente_Primo(int);
bool is_twin_prime(int);

int main(){
	int number = 1000;

	//puts("Ingresa el numero:");
	//scanf("%d", &number);
	for (int i = 1; i < number; i++)
	{
		if (primo(i)){
			//printf("%d Es primo!\n", i);
			//printf("El siguiente numero primo es:%d\n",siguiente_Primo(number));
			if (is_twin_prime(i))
			{
				printf("%d", i);
				printf("%4d\n", siguiente_Primo(i));
			}
		}
		//else
		//	printf("No es primo!\n");
	}

	return EXIT_SUCCESS;
}

bool primo(int number){
	for (int i = 1; i < number; i++)
		if (number % i == 0 && i != number && i != 1)
			return false;
	
	return true;
}

int siguiente_Primo(int number){
	while(true){
		number++;
		if (primo(number))
		 {
		 	return number;
		 }
	}
}

bool is_twin_prime(int num){
	if ( (siguiente_Primo(num) - num) == 2)
		return true;
	else
		return false;
}