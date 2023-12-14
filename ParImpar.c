#include <stdio.h>
//Funcion que me diga si un numero es par o no
int ParImpar(int num){
  int respuesta;
  if(num%2==0){
    respuesta=1;
  } else{
      respuesta=0;
  }
  return (respuesta);
}

int main() {
  int num;
  printf("Dime un numero y te dire si es par o no: ");
  scanf("%d",&num); //Leemos numero
  if (ParImpar( num)== 1){
    printf("El numero %d es par",num);
  } else{
    printf("El numero %d es impar",num);
  }
  return 0;
}
