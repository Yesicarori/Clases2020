#include <stdio.h>
#include <stdlib.h>

/*
calcular el factorial de un número

*/


int main()
{
    int numeroIngresado;
    int i;
    int resultado;

    printf("Ingresar un numero para calcular: ");
    scanf("%d", &numeroIngresado);

    resultado = numeroIngresado;

    for(i=numeroIngresado - 1; i>0; i --)
    {
        printf("Ahora I vale %d. \n", i);

        resultado = resultado * i;

        printf("Ahora el resultado vale %d. \n", resultado);
    }


    printf("El factorial de %d es: %d \n", numeroIngresado, resultado);



    return 0;
}
