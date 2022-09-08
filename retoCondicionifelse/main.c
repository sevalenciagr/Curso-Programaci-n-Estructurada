#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numA = 5;
    int num;
    printf("Adivina el numero entre el 1 y el 10 que estoy pensando \n");
    scanf("%i", &num);

    if ( num == numA)
    {
        printf("Felicitaciones lo adivinaste!");
    }
    else
    {
        printf("Ese no es, perdiste!");
    }


    return 0;
}
