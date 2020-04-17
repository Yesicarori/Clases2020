#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 10


int main()

{
    int edades[CANTIDAD];
    int i;
    char respuesta;

//INICIALIZO
    for(i=0; i<CANTIDAD; i++){
        edades[i] = -1;
    }

    do{
            for(i=0; i<CANTIDAD; i++){
                if(edades[i]==-1){//va a saltear al q sea distinto de -1 osea q ya tenga un valor ingresado
                    break;
                }

            }

        printf("\n Ingrese edad %d: ", i);
        scanf("%d", &edades[i]);

         printf("\n Desea continuar?");
         fflush(stdin);
        scanf("%c", &respuesta);


    }while(respuesta == 's');

        for(i=0; i<CANTIDAD; i++){
        printf("\nLa edad de %d es: %d", i, edades[i]);
        }



    return 0;
}
