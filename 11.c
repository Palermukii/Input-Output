#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int caracter;
    int contador = 0;
    FILE *archivo = fopen(argv[1], "r");



    while((caracter = fgetc(archivo)) != EOF) {
        if(caracter != '\n' && caracter != '\t' && caracter != ' ' ) {
            putchar(caracter);
        }
    }
    fclose(archivo);
    return 0;
}