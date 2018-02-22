#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n1,n2;
    float res;

    printf("ingresa la fraccion");
    scanf("%d%*[/]%d",&n1, &n2);


   

printf("%.2f",(float)n1/n2);

    return EXIT_SUCCESS;
}