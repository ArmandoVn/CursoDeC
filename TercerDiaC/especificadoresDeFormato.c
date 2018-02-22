
/*Ëspecificadores de conversion.
Tipo entero:
    d   Decimal
    o   Octal sin signo
    u   enteros sin signo
    x   hexadecimal sin signo

Valores de punto flotante:
    f   decimal con signo
    e   decimal en exponente con signo
    E   decimal en exponente con signo
    g   decide si ponerlo como decimal o con la e dependiendo de la precision requeria
    G

Caracteres:
    c   char
    s   string
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Variables enteras
    int entero = 57;
    unsigned sinSigno = 100;
    int octal = 057;
    int hexadecimal = 0x57;
    char caracter = 'A';
    char cadena[] = "Hola mundo";
    long long int enteroMuyMuyLargo = 922337206854775807LL; //Este es el numero mas
                                                            //grande que se puede
                                                            //representar en c.

    /*-----------------------------------------------------------------------------
  Printf(% banderas anchoDeCampo Precision modificadoresDeTamaño CaracterDeConversion);

    Printf regresa un entero, el numero de caracteres imprimidos con exito.
    -----------------------------------------------------------------------------*/
    printf("%d\n", enteroMuyMuyLargo);
    printf("%lld\n", enteroMuyMuyLargo);
    printf("%#o\n", octal);
    printf("%#x\n", hexadecimal);   //Con la bandera "#"" imprime el numero con 0x o 0 dependiendo
                                    //la base.
    printf("%#X\n", hexadecimal);
    printf("%d\n", hexadecimal);

    printf("%c\n", caracter);
    printf("%d\n", printf("%s\n", cadena));/*Printf regresa como resultado el numero de caracteres
                                            que imprimio de forma correcta y en caso de haber colocado un
                                            de linea tambien lo cuenta. */

    puts(cadena); //Imprime cadena, sin formato.
    putchar(caracter);  //Imprime caratcer, sin formato.

    printf("%e\n", 1234567.89);
    printf("%e\n", +1234567.89);//Operador unario para indicarle al compilador que es una variable positiva
    printf("%e\n", -1234567.89);//Operador unario para indicarle al compilador que es una variable negativo
    printf("%E\n", 1234567.89);
    printf("%f\n", 1234567.89);
    printf("%G\n", 1234567.89);

    printf("%04d\n",1); //Toma 4 espacios
    printf("%+4d\n",12);
    printf("%4d\n",123);
    printf("%4d\n",1234);
    printf("%4d\n",12345);
    printf("%4.0d\n",1);    
    printf("%.5s\n", cadena);   //Con el .5 le estamos indicando que unicamente imprima 5 char

    printf("%-4d%-4d\n",123,456);

    int ancho = 4, presicion = 5;
    printf("%*.*d\n", ancho, presicion, 1);

    int cuenta;
    printf("%s: %n\n", "hola", &cuenta);/* %n, imprime el numero de caracteres hasta antes de ese
                                        espeficador*/
    printf("%*s%s\n", cuenta,"", "pepe");
    printf("%d\n", cuenta);

    /*Libros para aprender a programar en c:
    Como programar en c/c++
    Deitel
    */

    return EXIT_SUCCESS;
}