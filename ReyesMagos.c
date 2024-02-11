#include <stdio.h>
#include <string.h>
#include<stdlib.h>
//Almacena los nombre de los tres reyes magos en una lista de punteros
//que apuntan a 3 palabras cuyo tamaño es distinto

int main(void) {
//Reservamos memoria para los 3 punteros  
  char *reyes[3];//El vector de 3 punteros donde almacenamos las direcciones
  char aux[10];//Un vector auxiliar para guardar momentáneamente cada nombre
  int longitud;//Longitud de cada palabra
  int cont;
  for(cont=0;cont<3;cont++){
      printf("\nRey mago numero %d: ",cont+1);
      scanf(" %s",aux);//Leemos el nombre
      longitud=strlen(aux);//Cuento las letras del nombre
      reyes[cont]=(char *) malloc(sizeof(char)*longitud);//Reservo memoria para el nombre, justo el tamaño de meoria que va a ocupar
      strcpy(*(reyes+cont),aux);//Copio letra a letra el nombre desde aux hasta el sitio de meoria reservado
      printf("\n He copiado %s",*(reyes+cont));//Muestro el nombre desde su nueva ubicación
  }
  return 0;
}