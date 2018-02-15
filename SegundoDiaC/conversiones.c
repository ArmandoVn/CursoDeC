//Libreria que incluye todas las funciones encargadas de la entra y salida de datos.
#include <stdio.h>

//Libreria que declara macros que se pueden usar para todos los SO.
#include <stdlib.h>
/*
Dentro de C existen dos tipos de conversion: 
La primera sera la conversion implicita que hace internamente el compilador de c,
esta se conoce como "promocion".

La segunda sera la conversion explicita que es aquella que declaramos literalmente
dentro de nuestro programa, a esta conversion se le conoce como "cast".*/
int main(){
    int sum = 17, cuenta = 5;
    double media;

    /*Para la siguiente operacion el compiladr de C casteara el tipo de sum y cuenta
    a double automaticamente.    */
    media = (double) sum / cuenta;  //De acuerdo a la precedencia de operandos, el compilador primero
                                    //haria el cast de cada uno de los operandos y despues haria la division.
    
    /*----------------------------------------------------------------------------------------------
        NOTA IMPORTANTE: Debemos recordar que en c si colocamos un 2.0 el compilador por defecto 
        lo tomara como double.
    ----------------------------------------------------------------------------------------------*/

    /*Cuando quiera realizar operaciones dentro de c y no sepa de que tamaño sera el resultado, unicamente
    me debo fijar en el mayor tamaño en bits de mis variables y ese sera el tipo o "tamaño" de mi resultado*/
    printf("Valor de la media: %f\n", media);


    char c = 127;
    short s = 300;
    /*
    En el ejemplo sieguiente podemos ver que estamos tratando de almacenaruna variable de mayor tamaño dentro 
    de una variable de menor tamaño, lo que hace internamente el compilador es que trunca el valor de bits al
    tamaño que se tiene.
    
    Ejemplo:
    short tiene 16 bits, mientras que char solo 8, lo que hace internamemte el compilador sera tomar los 8
    primeros bits y almacenarlos dentro de los 8 bits de char, por lo que habra perdida de informacion.

    Lo anterior es igual a decir que cuando queremos almacenar un valor mas grnade del permitido por el
    tipo de dato este al llegar a su maxima capacidad receteara el contador y empezara de nuevo a contar.
    */
    c = s;

    printf("%d", c);

    return EXIT_SUCCESS;
}

/*
Tarea: Investigar las reglas del codigo ASCII
*/