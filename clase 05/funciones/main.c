#include <stdio.h>
#include <stdlib.h>
#include"funcionesarrays.h"
#define CANTIDAD 3


int main()
{
    int arraysDeEdades[CANTIDAD];
    int i;
    int maximo;
    int minimo;
    int cantidadCargada;
    int cantidadVacia;
    int primerLugarLibre;
    float edadpromedio;


    //me falta agregar el menu q se vio en el video V de la clase 5


    inicializarArray(arraysDeEdades, CANTIDAD, 1);
    mostrarArray(arraysDeEdades, CANTIDAD);


    maximo= retornarMayor(arraysDeEdades, CANTIDAD);
    minimo = retornarMenor(arraysDeEdades, CANTIDAD);
    cantidadCargada = cantidadDeEdadesCargadas(arraysDeEdades, CANTIDAD);
    cantidadVacia = cantidadDeEdadesVacias(arraysDeEdades, CANTIDAD);

    primerLugarLibre= indiceLibre(arraysDeEdades, CANTIDAD);
    if (primerLugarLibre==-1){
        printf("\nesta lleno");
    }else{
        printf("\nEl primer lugar libre es %d", primerLugarLibre);
    }

    edadpromedio = promedio(arraysDeEdades, CANTIDAD);
    if (edadpromedio!=-1){
        printf("\n el promedio es : %f", edadpromedio);
    }


        printf("\nel mayor es : %d", maximo);
        printf("\nel menor es : %d", minimo);






    return 0;
}
