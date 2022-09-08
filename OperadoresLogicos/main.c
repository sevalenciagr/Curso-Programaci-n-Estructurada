#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" \n");

    float valorA, valorB, valorC;
    valorA = 5;
    valorB = valorC = 10;

    if((valorA < valorB) && (valorB == valorC))
    {
        printf("Se cumplieron las dos condiciones \n");
    }
    else
    {
        printf("No se cumplieron las dos condiciones \n");
    }
    if((valorA > valorB) || (valorA <= valorC))
    {
        printf("Se cumple por lo menos una de las dos condiciones \n");
    }
    else
    {
        printf("No se cumplieron las dos condiciones \n");
    }

    return 0;
}
