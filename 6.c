#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int numeros;

    while(scanf("%d", &numeros) != EOF) {
        if (numeros > a && numeros < b)
        {
          printf("%d\n", numeros);

        }
    }

    return 0;
}