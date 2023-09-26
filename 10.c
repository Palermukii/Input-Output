#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int caracter;
    int contador = 0;

    while((caracter = getchar()) != EOF) {
        if(caracter == '\n') {
            contador++;
        }
    }

    printf("%d", contador);
    return 0;
}