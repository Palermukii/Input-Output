#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    FILE *archivo = fopen(argv[1], "r");
    char caracter[100];

    if(archivo == NULL) {
        printf("El archivo no es valido");
    }


    while((fgets(caracter, 100, archivo)) != NULL) {
        printf("%s",caracter);
    }

    

    fclose(archivo);
    return 0;
}