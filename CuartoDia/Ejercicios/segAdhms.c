#include<stdio.h>
#include<stdlib.h>

int main()
{


    int dias, horas,minutos, segundos,segunTotal;
    float res;

    printf("ingresa los SEGUNDOS a convertir a dia,hora,minuto,segundo");
    scanf("%d", &segunTotal);

    

    res=((segunTotal*86400));

    
    printf("%d",res);



    return EXIT_SUCCESS;
}


write a program that