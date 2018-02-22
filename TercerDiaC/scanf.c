#include <stdio.h>
#include <stdlib.h>

void main(){
    /*----------------------------------------------------------------------------------------
                                    Scanf(% * ancho tamaño caracter);
    Regresa el numero de variables que fueren correctamente leidas.
    -----------------------------------------------------------------------------------------*/

    long long int lli;
    
    // puts("Ingresa un entero muy grande: ");
    // scanf("%10lld", &lli); //Lee unicamente los primeros 10 caracteres.
    // printf("%lld", lli);

    int entero2;
    int octal2;
    int hexadecimal2;

    // puts("Ingresa un entero: ");
    // scanf("%d", &entero2);

    // puts("Ingresa un octal: ");
    // scanf("%o", &octal2);

    // puts("Ingresa un hexadecimal: ");
    // scanf("%x", &hexadecimal2); //Scanf %d unicamente lee numeros, en el momento en el que lea un caracter lo omite.

    puts("Ingresa decimal octal hexadecimal:");
    int resultado = scanf("%d %o %x", &entero2, &octal2, &hexadecimal2);
    /*
    %d  lee base 10
    %i  lee base 10
        base 8
        base 16
    %o  lee base 8
    %x  lee base 16
    */
    printf("Entero: %d\n", entero2);
    printf("Octal: %#o\n", octal2);
    printf("Hexadecimal: %#x\n", hexadecimal2);

    printf("Resultado: %i\n", resultado);

    double h, i ,j;
    // puts("Ingresa tres valores de punto flotante:");
    // scanf("%le%lf%lg", &h, &i , &j);

    // printf("%le\n", h);
    // printf("%lf\n", i);
    // printf("%lg\n", j);

    puts("Escribe un fecha: ");
    scanf("%d/%d/%d", &h, &i , &j);
    printf("%d/%d/%d", h, i, j);

    char cadena[100];

    puts("Escribe algo: ");
    scanf("%s", cadena);
    printf("%s", cadena);

    puts("Ingresa letras y numeros:");
    scanf("%[0-9]", cadena);
    printf("%s", cadena);

    puts("Ingresa letras y numeros otra vez:");
    scanf("%[a-zA-Z]", cadena);
    printf("%s", cadena);
}