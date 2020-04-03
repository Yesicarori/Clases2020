#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
    //cada opcion va a ir en un printf y uso do while pq al menos una vez va a aparecer
    do{
    printf("1. sumar \n");
    printf("2. restar \n");
    printf("3. multiplicar \n");
    printf("4. dividir \n");
    printf("5. salir \n");

        scanf("%d",&opcion);

     //q pasa con cada opcion
    switch(opcion){
    case 1:
        printf("estoy sumando");
    break;
    case 2:


    break;


    }
    system("pause");
    system("cls"); //limpia la pantalla
    }while (opcion!=5)




    return 0;
}
