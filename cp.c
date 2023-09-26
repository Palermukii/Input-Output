#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    FILE *origen = fopen(argv[1], "r");
    FILE *destino = fopen(argv[2], "w");
    char caracter;

    while((caracter = fgetc(origen)) != EOF) {
        fputc(caracter, destino);
    }

    fclose(origen);
    fclose(destino);

}