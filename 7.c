#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int n = atoi(argv[3]);
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
            int numeros = rand() % (b -a) + a;
            printf("%d\n", numeros);
    }
    
    return 0;

}