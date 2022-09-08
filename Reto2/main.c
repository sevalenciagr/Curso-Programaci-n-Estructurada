#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radioBase;
    float alturaCilindro;


    printf("Vamos a calcular el volumen de un cilindro! \n\n");

    printf("Ingresa el radio de la base: ", radioBase);
    scanf(" %f", &radioBase);
    printf("Ingresa la altura del cilindro: ", alturaCilindro);
    scanf("%f \n\n", &alturaCilindro);

    float areaBase = 2 * 3.1416 * radioBase * (alturaCilindro+radioBase);

    printf("El area de la base es: %f \n", areaBase);

    return 0;
}
