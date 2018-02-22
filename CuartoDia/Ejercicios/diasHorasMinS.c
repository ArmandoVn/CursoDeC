#include<stdio.h>
#include<stdlib.h>

int main()
{

    /*dias, horas, minutos a segundos A SEGUNDOS
    int dias, horas,minutos, segundos,res;

    printf("ingresa los dias, las horas,minutos,segundos");
    scanf("%d %d %d %d", &dias,&horas,&minutos,&segundos);

    res=((dias*86400)+(horas*3600)+(minutos*60)+segundos);

    
    printf("%d",res);

    */

    int dias, horas,minutos, segundos,segunTotal;
    float res;

    printf("ingresa los SEGUNDOS a convertir a dia,hora,minuto,segundo");
    scanf("%d", &segunTotal);

    

    res=((segunTotal*86400));

    
    printf("%d",res);



    return EXIT_SUCCESS;
}