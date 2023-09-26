#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    FILE *archivo = fopen(argv[1], "r");
    int caracter;
    int contadorp = 1;
    int contadorc = 0;
    int contadorl = 1;
    while((caracter = fgetc(archivo)) != EOF) {
        if(caracter == ' ') {
            contadorp++;
        }
        if(caracter == '\n') {
            contadorl++;
            contadorp++;
        }
        contadorc++;
    }
    printf("%d lineas, %d palabras, %d caracteres",contadorl, contadorp, contadorc);
    }