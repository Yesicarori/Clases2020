#include <stdio.h>
#include <stdlib.h>

//**************-----FUNCIONES-----***************

/*
**************PROTOTIPO*******************
tipoRetorno    nombreFx  (ListaParametros)  ;

****TIPO DE RETORNO:
        -INT
        -FLOAT
        -CHAR
        -VOID(no devuelve nada, es una función que va a mostrar un mensaje)
        -DOUBLE
        -otros

**** NOMBRE FUNCIÓN:
        Tengo que poner qué hace.
        gralmente es un verbo mas sustantivo
        Ej: sumarNumeros

**** LISTA DE PARÁMETROS
        los parámetros q va a recibir(int,char,etc)

*/

int getInt(char [], int, int); //va a solicitar un entero
                    //recibe una cadena de caracteres



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

//**********IMPLEMENTACIÓN***********
                            //limites de validación
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
