#include<stdio.h>
#include<stdlib.h>

int main()
{


    long dias, horas,minutos, segundos;

    puts("Ingresa los SEGUNDOS a convertir en dia/hora/min/seg");
    scanf("%d", &segundos);

    dias = segundos / 86400;
    segundos -= dias * 86400;
    horas = segundos / 3600;
    segundos -= horas * 3600;
    minutos = segundos / 60;
    segundos -= minutos * 60;

    printf("Resultado: %d/%d/%d/%d", dias, horas, minutos, segundos);

    return EXIT_SUCCESS;
}