#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerX;
    int integerY;


    printf("Ingresa el valor entero de X: %i \n", integerX);
    scanf("%i", &integerX);
    printf("Ingresa el valor entero de Y: %i \n\n", integerY);
    scanf("%i", &integerY);


    printf("El valor entero intercambiado de X es: %i \n", integerY);
    printf("El valor entero intercambiado de Y es: %i \n", integerX);


    return 0;
}
