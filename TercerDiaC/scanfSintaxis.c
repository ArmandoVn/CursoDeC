#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n1,n2;
    char cad1[100], cad2[100];
    scanf("%[^\n]%*c",cad1); //todo lo que ingrese el usuario excepto el enter
    scanf("%[^\n]%*c",cad2); //si dejkamos esta linea, con [^\n] al final imprime caracteres distintos y para ello, le pondremos el ]*%c
                            //consume el siguiente elemento en el buffer
                            //lee ahasta el salto de linea, regresalo al buffer y vuelve a leer
                            //tambien se le puede poner la cantidad exacta que queremos que quiera
                            //seria asi %100[^\n]
    
    puts(cad1);
    puts(cad2);
    


    // scanf("%d", &n1);
    // scanf("");//lee un espacio 
    // scanf("%*c"); //consume un caracter y lo saca del buffer
    // scanf("");//lee un espacio
    // scanf("%d", &n2); //este ya puede leer el siguiente numero

    // printf("%d\n", n1);
    // printf("%d\n", n2);

/*
    %n cuenta en numero de caraceres
    %[] lee todo


*/

    return EXIT_SUCCESS;
}