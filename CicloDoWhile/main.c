#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ciclo Do While \n");

    char answer = 'q';
    char value;

    do
    {
        printf("Ingresa una letra: \n");
        scanf("%c", &value);
    }while(value != answer);

    printf("Coinciden las letras %c == %c", value, answer);

    return 0;
}
