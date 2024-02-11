//En este ejercicio el programa me pregunta qué tabla deseo escribir
//me la escribre con el formato
//*****************************
//*        TABLA DEL 3        *
//*****************************
// 3 x 1 = 3
// 3 x 2 = 6
//....
#include <stdio.h>

int main(void) {
//Definición de variables
int n_tabla;
int producto;
int cont;
//Intrucciones de entrada/salida (i/o)
printf("QUÉ TABLA DESEEAS QUE TE MUESTRE (1-10): ");
scanf("%d",&n_tabla);
printf("\n*****************************");
printf("\n*        TABLA DEL %d        *",n_tabla);
printf("\n*****************************");
//Creamos un bucle for que cuente de 1 a 10 for cont in range(1,11)
for(cont=1;cont<=10;cont++){
  producto=n_tabla*cont;
  printf("\n%d x %d = %d",n_tabla,cont,producto);
}//cont++ significa cont=cont+1

return 0;
}