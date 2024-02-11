#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  //DEFINICIÓN DE VARIABLES
  int tirada;
  int puntuacion[2];
  int jugador;
  int seed;
  int aleatorio;
  int dado;
  //INICIALIZACIÓN DEL GENERADOR DE NÚMEROS PSEUDOALEATORIOS
  seed=time(0);
  srand(seed);
  //PARTIDA
  for(tirada=1;tirada<=3;tirada++){
    for(jugador=1;jugador<=2;jugador++){
      dado=rand();
      printf("\nJUGADOR %d=%d", jugador,dado);
      puntuacion[jugador-1]=puntuacion[tirada]+dado;//puntuacion_1 +=dado
    }
  }
  //GANADOR
  if(puntuacion[0]>puntuacion[1]){
    printf("\nGANA JUGADOR 1");
  } else {
    if(puntuacion[0]<puntuacion[1]);
    printf("\nGANA JUGADOR 2");
  }
  
  return 0;
   }