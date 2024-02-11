//Lee 5 números y devuelve la suma
#include <stdio.h>

int main(void){
  int num=0;
  int cont;
  int suma=0;
//Repetimos
  //for cont in range(1,6):
  for(cont=1;cont<=5;cont++){
    printf("\nIntroduce un número: ");
    scanf("%d",&num);
    suma=suma+num;
  }
  printf("\nSUMA= %d",suma);
  return(0);
}