#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {


    char *texto = argv[1];
    FILE *destino = fopen(argv[2], "a"); // Abre el archivo en modo "añadir".

    fprintf(destino, "%s\n", texto);

    fclose(destino);

    return 0;
}
