#include <stdio.h>
#include <stdlib.h>

int main() {

    int contador = 0;
    int caracteres;

    while((caracteres = getchar()) != EOF) {
        if (caracteres != '\n')
        {
                    contador++;

        }
        
    }

    printf("%d", contador);

    



    return 0;
}