#include"funcionesarrays.h"

void inicializarArray (int arrayPasadoPorParametro[],int cantidad){
    int i;
    for(i=0; i<cantidad; i++){
       arrayPasadoPorParametro[i]=-1;
    }
}
void mostrarArray(int arrayPasadoPorParametro[],int cantidad){
       int i;
    for(i=0; i<cantidad; i++){
       printf("\n la edad es Nro %d: %d ", i, arrayPasadoPorParametro[i]);
    }
}


int cantidadDeEdadesCargadas(int arrayPasadoPorParametro[],int cantidad){
    int i;
    int contador = 0;
    for(i=0; i<cantidad; i++){
      if(arrayPasadoPorParametro[i]!= -1)
      {
          contador++;
      }
    }

 return contador;
}

int cantidadDeEdadesVacias(int arrayPasadoPorParametro[],int cantidad){
    int i;
    int contador = 0;
    for(i=0; i<cantidad; i++){
      if(arrayPasadoPorParametro[i]== -1)
      {
          contador++;
      }
    }
     return contador;
}


int retornarMayor(int arrayPasadoPorParametro[],int cantidad){
    int i;
    int mayor = arrayPasadoPorParametro[0];//va a ser igual al primer elemento
    for(i=0; i<cantidad; i++){
         if(mayor < arrayPasadoPorParametro[i]){
            mayor = arrayPasadoPorParametro[i];

         }
    }

    return mayor;
}


int retornarMenor(int arrayPasadoPorParametro[],int cantidad){
    int i;
    int menor = arrayPasadoPorParametro[0];
    for(i=0; i<cantidad; i++){
         if(menor > arrayPasadoPorParametro[i] && arrayPasadoPorParametro[i]!=-1){
            menor = arrayPasadoPorParametro[i];
         }
    }

    return menor;
}

int indiceLibre(int arrayPasadoPorParametro[],int cantidad){
int i;
for(i=0; i<cantidad; i++){
       if (arrayPasadoPorParametro[i]==-1){
        break;

       }
}
//si di toda la vuelta significa q no hay mas lugar
if(i==cantidad){
    i = -1;
}
return i; //me va a devolver el i donde tire el break
}

float promedio(int arrayPasadoPorParametro[],int cantidad){
    int i;
    int contadorDeEdades=0;
    int acumuladorDeEdades= 0;
    float respuesta = -1;

        for(i=0; i<cantidad; i++){
            if (arrayPasadoPorParametro[i]!=-1){
            contadorDeEdades ++;
            acumuladorDeEdades= acumuladorDeEdades + arrayPasadoPorParametro[i];
            }

        }

        if(contadorDeEdades >0 ){
          respuesta = (float)acumuladorDeEdades / contadorDeEdades;
        }

return respuesta;

}



