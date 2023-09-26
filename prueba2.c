#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    char *texto = argv[1];
    FILE *destino = fopen(argv[2], "w");

        for(int i = 0; texto[i] != '\0'; i++) {
        fputc(texto[i], destino);
        }
}