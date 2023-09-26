#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {


    FILE *archivo = fopen(argv[1], "r");
    char caracter;
    int contador = 1;
    printf("%d ", contador);
    contador++;

    while((caracter = fgetc(archivo)) != EOF) {
        putchar(caracter);

            if(caracter == '\n') {
                printf("%d ", contador);
                contador++;
            }
        }

        fclose(archivo);
    }
