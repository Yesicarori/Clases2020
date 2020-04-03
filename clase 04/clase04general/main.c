#include <stdio.h>
#include <stdlib.h>
#include "input.h"

//**************-----FUNCIONES-----***************


int main()
{
   int edad;
   int legajo;
   int nota;

 //*************LLAMADA*************
    edad = getInt("Ingrese su edad: ", 1, 18);//le paso el mensaje
    legajo = getInt("Ingrese legajo: ", 100, 500);
    nota = getInt("Ingrese nota: ", 1, 10);

    printf("Su edad es: %d. ", edad);
    printf("Su legajo es: %d.", legajo);
    printf("Nota: %d", nota);

    return 0;
}

