#include<stdio.h>
#include<stdlib.h>

int main(){
	int renglones, blancos, c = 1;
	puts("Ingresa el numero de renglones:");
	scanf("%d",&renglones);
	printf("%d\n", renglones);

	for (int i = 0; i < renglones; i++)
	{
		for (blancos = 1; blancos <= renglones - i; blancos++)
			printf("  ");
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || i == 0)
			{
				c = 1;
			}
			else{
				c = c*(i-j+1)/j;
			}
			printf("% 4d",c);
		}
		puts("");
	}
	return EXIT_SUCCESS;
}