#include <stdio.h>
#include <stdlib.h>

/*
calcular el factorial de un número




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
*/
//***************RECURSIVIDAD *******************
long int factorial (int);

int main (){
    int resultado;
    resultado = factorial(5);

    printf("%d", resultado)

return 0 ;
}

int factorial(int numero){
    int resultado;

    if (numero == 0 ){
        resultado = 1;
    }
    else{
        resultado = numero * factorial(numero - 1 );

    }
return resultado;
}
