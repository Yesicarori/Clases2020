#include "input.h"

//**********IMPLEMENTACI�N***********
                            //limites de validaci�n
int getInt(char mensaje[], int min , int max){

    int dato;
    printf("%s", mensaje); //muestro el mensaje q recibe
    scanf("%d", &dato);
    while(dato <min || dato > max){
        printf("Error. Coloque dato entre %d y %d: ", min, max);
        scanf("%d", &dato);
    }

    return dato;
}

