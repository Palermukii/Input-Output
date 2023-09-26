#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n;
    printf("Ingrese la cantidad de numeros que desea sumar: ");
    scanf("%d",&n);
    int total = 0;

    while(n > 0) {
        int numero;
        printf("Escriba su numero: ");
        scanf("%d",&numero);
        total += numero;
    
    n--;
    }

printf("%d", total);
    return 0;
}