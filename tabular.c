#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    FILE *archivo = fopen(argv[1],"r");
    char datos[200];
    while(fgets(datos, 200, archivo) != NULL) {
        char nombre[200] = "";
        int edad = 0;
        int salario = 0;
            if((sscanf(datos, "%[^,],%d,%d", nombre, &edad, &salario)) == 3) {
                printf("\t%s, %d, %d\n", nombre, edad, salario);
            }
    }
}