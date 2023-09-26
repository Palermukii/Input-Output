#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *archivo = fopen(argv[1], "r");
    int cant = atoi(argv[2]);
    char linea[cant][1024];
    int contador = 0;

    while(fgets(linea[0], 1024, archivo) != NULL && contador < cant) {
        printf("%s", linea);
        contador++;
    }
}