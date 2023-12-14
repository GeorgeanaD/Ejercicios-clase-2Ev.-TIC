#include <stdio.h>
//funcion que te pida un numero y te lo descomponga en sus factores de numeros primos
//Funcion que haga la operacion matematica, con un bucle para conseguir todos los factores del num
void factores_primos(int num) {
   int cont;
   for (cont=(num-1); cont>1; cont--) { //  hace el bucle de mayor a menor numero 
      while (num % cont == 0) { //va desde 2 hasta el numero antes del propio ya que todo numero puede descomponerse entre 1 y él mismo
        
         printf("%d ", cont);
         num = num / cont;
      }
   }
}
//funcion principal, sera la que muestre los resultados
int main() {
   int num;
   printf("Introduce un número: ");
   scanf("%d", &num);
   printf("Numero factorizado: ");
   factores_primos(num);
   return 0;
}