#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 3


//**************** ARRAYS ************************
int main()
{

   int unaEdad;
    unaEdad = 12;
    int arraysDeEdades[CANTIDAD]; // dentro de los corchetes digo cuantos espacios voy a ocupar
    int otraEdad;
    float altura;
    char respuesta;
    int ubicacion;
    int i;
    char sobreescribir;

   /*
        //////para hardcodear en un array
    arraysDeEdades[0]= 33;
    arraysDeEdades[1]= 55;
    arraysDeEdades[2]= 66;

    printf("la edad es: %d", arraysDeEdades[0]); // dice la de la posicion adentro de los corchetes



    //carga normal de datos
    for (i=0; i<CANTIDAD; i++){
        arraysDeEdades[i]= 33*i;
    }


    for (i=0; i<CANTIDAD; i++){
        printf("\n la edad es: %d", arraysDeEdades[i]);
    }
*/
    // INICIALIZAR UN ARRAY****************************************
            //inicializo en -1 para saber si ingresó 0, inicializo para saber si yase entro en el espacio

     for (i=0; i<CANTIDAD; i++){
        arraysDeEdades[i]=-1;
     }

 //***********************************************************

    // CARGA ALEATORIA
        //cargo los datos mientras el cliente quiera,
        // una vez q termino de ingresar le muestro los datos

    printf("\n carga aleatoria");

    do{      //VALIDACIÓN
            sobreescribir = 's';

            do{
                printf("\n Ingrese ubicacion de 10 disponibles ");
                fflush(stdin);
                scanf("%d", &ubicacion);
                //le pido una ubicacion de las 10 disponibles en el array

            }while(ubicacion<1 || ubicacion>CANTIDAD);

            if (arraysDeEdades[ubicacion-1]!=-1)
            {
                printf("Ya tiene valor cargado. Desea cambiarlo?");
                fflush(stdin);
                scanf("%c", &sobreescribir);
            }

            if(sobreescribir == 's'){
            printf("\n ingrese edad ");
            fflush(stdin);
            scanf("%d", &arraysDeEdades[ubicacion-1]);
            //la ubicacion que me da el cliente la pongo en donde va a guardarse la edad q ingrese

            }

        printf("\n desea continuar?");
        fflush(stdin);
        scanf("%c", &respuesta);

    }while(respuesta == 's');

    printf("\n despues");

    for (i=0; i<CANTIDAD; i++){

    printf("\n la edad es Nro %d :  %d ", i, arraysDeEdades[i]);

     }

    return 0;
}
