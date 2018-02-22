#include<stdio.h>
#include<stdlib.h>

int main()
{
    int dias, horas,minutos, segundos,res;

    puts("Ingresa los dias horas minutos y segundos:");
    scanf("%d %d %d %d", &dias,&horas,&minutos,&segundos);

    res=dias*86400+horas*3600+minutos*60+segundos;

    printf("%d",res);

    return EXIT_SUCCESS;
}