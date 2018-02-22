/*Invocacion de librerias*/
#include <stdio.h>


//Libreira que me permite utilizar el true y el false
#include <stdbool.h>

/*El valor devuelto se lo regresa la SO, recordemos que el SO es el
encargado de llamar al metodomain de todos nuetros programas.*/

/*Directiva del preprocesador que es sustituida en tiempo de preprocesamiento.*/
#define PI 3.1416

//Variable global
int global = 5;


int main(){
    int local = 10,  otra = 6;
    short int a;
    unsigned int i;
    long long int c;
    float d;
    double e;
    char f;

    _Bool booleano = 0;
    _Bool booleano2 = true;
    
    /*Const se resuleve en tiempo de compilado.*/
    const int constante = 100;

    //Asignacion multiple
    local = otra = 25;

    printf("Tamano en bytes:\n");
    
    printf("int: %d\n", sizeof(a));
    printf("unsigned int: %d\n", sizeof(i));
    printf("long long int: %d\n", sizeof(c));
    printf("float: %d\n", sizeof(d));
    printf("double: %d\n", sizeof(e));
    printf("char: %d\n", sizeof(f));
    printf("bool: %d\n", sizeof(booleano2));

    printf("Valor de local = %d y otra = %i", local , otra );


    /*Toda linea que regresa un valor se llama expresion.*/


    /*Operadores de asignacion como += -= son igual de efientes que
    las formas de hacerlo mas largas.*/


    /*Una variable es una localidad de memoria con una direccion y valor asignados.*/

    /*NOTA IMPORTANTE: Los operadores logicos dentro de C son cortocircuitados, esto quiere decir
    que por ejemplo si yo tengo la comparacion siguiente: 
                                        5 > 6 && 6 > 8
    Como la primera comparacion regresa un false el and se cortocircuita, pues sabemos que en la
    operacion de and si un valor es falso todo se vuelve falso.
    */

    /*Operadores unarios:
        !, ++, --
    */
    int g = 5;
    printf("%i\n", g);
    printf("%i\n", g++);
    printf("%i\n", ++g);
    printf("%i\n", --g);
    printf("%i\n", g--);

    int o = 0765;   //Valores en base octal empiezan con 0, es estandar
    int b = 0b10101010;   //Valores en binario empiezan con 0b, unicamente sirve con gcc
    int h = 0xABC123;   //Valores en hexadecimal

    printf("%d\n", o);
    printf("%d\n", b);
    printf("%d\n", h);

    /*La direncia entre %i y %d es que el primero se utiliza unicamente para valores enteros, mientras
    que el segundo se utilza para variables enteras que almacenen datos en base hexadecimal, binaria y octal.*/
    return 0;
}