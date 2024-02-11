#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  //DEFINCIÓN DE VARIABLES
  int seed;//Es la semilla. El tiempo transcurrido desde una fecha dada
  int aleatorio;// es el número aleatorio que obtengo (1-6)
  int cont;
  int recuento[6];//Es el marcador donde almaceno cuántas veces ha salido cada número
  int numero;//Es el valor de cada cara

  //TOMAMOS EL VALOR DE LA SEMILLA. DEL RELOJ INTERNO
  seed=time(0);
  srand(seed);//INICIALIZAMOS EL GENERADOR DE NÚMEROS PSEUDOALEATORIOS
  for(cont=1;cont<=1000;cont++){//TIRAMOS EL DADO 1000 VECES
   aleatorio=rand()%6+1;//HACEMOS QUE EL NÜMERO AL AZAR ESTÉ COMPRENDIDO ENTRE 1-6
   printf("\naleatorio= %d",aleatorio);
   for(numero=1;numero<=6;numero++){//COMPARAMOS EL NÚMERO GENERADO CON 1-6
     if(aleatorio==numero){
       recuento[numero]++;//CONTAMOS UNA VEZ mÄS PARA EL NÚMERO OBTENIDO
     }
   }
  printf("\nRECUENTO");//MOSTRAMOS LOS RESULTADOS


  }
  for(numero=1;numero<=6;numero++){
    printf("\nEl %d ha salido %d",numero,recuento[numero]);
  }
  return 0;
}