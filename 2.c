#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n = atoi(argv[1]);
    int total = 0;

    while(n > 0) {
        int numero;
        printf("Escriba su numero: ");
        scanf("%d",&numero);
        if (numero == 0)
        {
            n = 0;
        }
        
        total += numero;
        
    n--;
    }

printf("%d", total);
    return 0;
}