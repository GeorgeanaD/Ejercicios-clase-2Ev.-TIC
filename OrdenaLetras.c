
//Método de la BURBUJA


#include <stdio.h>
#define TAMANO 5

int devuelve_menor(int num1,int num2,int num3){
  int respuesta;
  if(num1<num2)
    if(num1<num3) respuesta=num1;
    else respuesta=num3;
  else
    if(num2<num3) respuesta=num2;
    else respuesta=num3;
  return(respuesta);
}


int main(void) {
  //Definimos las variables
  char letra[TAMANO];
  int aux;
  int n_veces;
  int menor;
  int cont;
  //Pedimos los números
  for(cont=0;cont<TAMANO;cont++){
    printf("\nDime la letra %d: ",cont);
    scanf(" %c",&letra[cont]);
  }
  printf("\nHas introducido las letras: ");
  for(cont=0;cont<TAMANO;cont++){
    printf("%c ",letra[cont]);

  }
//Vamos a ordenar el vector por el método de la burbuja

  for(n_veces=1;n_veces<=TAMANO-1;n_veces++){
    for(cont=0;cont<TAMANO-1;cont++){
      if(letra[cont]>letra[cont+1]){
        aux=letra[cont];
        letra[cont]=letra[cont+1];
        letra[cont+1]=aux;
    }
  }
  }
  printf("\nVector ordenado: ");
  for(cont=0;cont<TAMANO;cont++){
    printf("%c ",letra[cont]);

  }

/*
  scanf("%d",&num[0]);//EL & lo explicaremos un poquito más adelante
  printf("\nDime otro número: ");
  scanf("%d",&num[1]);
  printf("\nDime otro número: ");
  scanf("%d",&num[2]);
  //Los enviamos a una función.La función nos devuelve el menor
  menor=devuelve_menor(num1,num2,num3);
  printf("\nEl menor es el número: %d",menor);//Explicaremos por qué no pongo & aquí
  */
  return(0);


}