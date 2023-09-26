#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {


    FILE *archivo = fopen(argv[1], "r");
    char caracter[100];
    int contador = 1;

    while((fgets(caracter, 100, archivo)) != NULL) {
            printf("%d %s", contador, caracter);
            contador++;
        }

        fclose(archivo);
    }
