#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    char caracteres[1000];

    printf("Ingrese el texto: ");
    scanf("%s", &caracteres);
    int cantcaracteres = 0;
    int cantpalabras = 1;
    int cantlineas = 1;

    while((fgets(caracteres, 1000, stdin)) != NULL) {
        if(caracteres == ' ') {
            cantpalabras++;
        }
        if(caracteres == '\n') {
            cantlineas++;
        }
        cantcaracteres++;
    }
    printf(" lineas %d, palabras %d, caracteres %d", cantlineas, cantpalabras, cantcaracteres);
}