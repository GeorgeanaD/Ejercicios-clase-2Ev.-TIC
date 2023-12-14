#include <stdio.h>
// Funcion que nos diga si un numero es divisible o no por 2,3,5 o 7
//Introducimos la funcion
int main() {
    int num;
    printf("Introduce un número: ");
    scanf("%d", &num);
  //Lee un numero
////Si al ser dividido entre 2 su resto es 0, sera divisible por dos, lo mismo pasara con el resto de nums
    if(num % 2 == 0) {
        printf("%d es divisible por 2\n", num);
    } else {
        printf("%d no es divisible por 2\n", num);
    }

    if(num % 3 == 0) {
        printf("%d es divisible por 3\n", num);
    } else {
        printf("%d no es divisible por 3\n", num);
    }

    if(num % 5 == 0) {
        printf("%d es divisible por 5\n", num);
    } else {
        printf("%d no es divisible por 5\n", num);
    }

    if(num % 7 == 0) {
        printf("%d es divisible por 7\n", num);
    } else {
        printf("%d no es divisible por 7\n", num);
    }

    return 0;
}
