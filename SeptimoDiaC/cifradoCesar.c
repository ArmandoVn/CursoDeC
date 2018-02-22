#include<stdio.h>
#include<stdlib.h>

int main(){

	FILE *f;
	int c, lineas;
	f = fopen("archivo.txt", "r");
	if (f == NULL)
	{
		fputs("File error",stderr); 
		exit(1);
	}
	else
    {	
    	/*Recordemos c almacena el valor de los caracteres en codigo ASCII en decimal.*/
    	lineas = fgetc(f);
    	if (lineas > 0)
    		lineas -= 48;
    	else
    		lineas
    	printf("%d\n", lineas);
        while((c = fgetc(f)) != 35){
			if (c == 32)
				printf(" ");
			else if (c == 58)
			{
				continue;
			}
			else
				printf("%c",c+lineas);
        }
    }
    fclose(f);
	return EXIT_SUCCESS;
}