#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n1,n2;
    float res;

    puts("Ingresa la fraccion:");
    scanf("%d%*[/]%d",&n1, &n2);

    if(n2 == 0)
        printf("Indeterminate!");
    else
        printf("%.2f", (float)n1/n2);

    return EXIT_SUCCESS;
}