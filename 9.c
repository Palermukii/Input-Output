#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
srand(time(NULL));
    int numero = rand() % 1000 + 1;
    int ingresado;
    printf("Ingrese un numero: ");
    int intentos = 0;
    int maximointentos = 10;

    if(ingresado > 1000 || ingresado < 1 ) {
        printf("Ingresa algo valido :v");
    }
    if(ingresado )


    while(intentos < maximointentos) {
        scanf("%d", &ingresado);
        if(ingresado > numero) {
            printf("Incorrecto, ingrese uno mas bajo\n");
        }
        else if(ingresado < numero) {
            printf("Incorrecto, ingrese uno mas alto\n");
        }
        else if(ingresado == numero) {
            printf("Adivinaste\n");
            break;
        }

    intentos++;
    }

    if(intentos == maximointentos) {
        printf("Muchos intentos");
    }
}