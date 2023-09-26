#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *archivo = fopen(argv[1], "r");
    int caracter;
    int contador = 0;
    while((caracter = fgetc(archivo)) != EOF && contador < 10){
        putchar(caracter);
        if(caracter == '\n') {
            contador++;
        }
    }
}