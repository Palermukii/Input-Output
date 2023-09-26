#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int numero;
    int total =  0;
    printf("Escriba sus numeros: ");
    

    while(scanf("%d",&numero) != EOF) {
        total += numero;
    }

printf("%d", total);
    return 0;
}