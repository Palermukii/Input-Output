#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Uso: %s <nombre_archivo>\n", argv[0]);
        return 1;
    }

    FILE *archivo = fopen(argv[1], "r");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo\n");
        return 1;
    }

    char palabras[30][200];
    int numPalabras = 0;

    while (numPalabras < 30 && fgets(palabras[numPalabras], sizeof(palabras[0]), archivo)) {
        int len = strlen(palabras[numPalabras]);
        if (len > 0 && palabras[numPalabras][len - 1] == '\n') {
            palabras[numPalabras][len - 1] = '\0';
        }
        numPalabras++;
    }

    fclose(archivo);

    if (numPalabras == 0) {
        printf("El archivo está vacío o no contiene palabras.\n");
        return 1;
    }

    srand(time(NULL));

    int indicePalabra = rand() % numPalabras;
    char palabraSecreta[200];
    strcpy(palabraSecreta, palabras[indicePalabra]);

    int intentos = 0;
    char letrasUsadas[200] = "";
    char letrasAdivinadas[200];

    for (int i = 0; i < strlen(palabraSecreta); i++) {
        letrasAdivinadas[i] = '_';
    }
    letrasAdivinadas[strlen(palabraSecreta)] = '\0';

    printf("Bienvenido al juego del ahorcado\n");
    printf("Tienes 7 intentos\n");

    while (intentos < 7) {
        printf("Palabra a adivinar: %s\n", letrasAdivinadas);
        printf("Letras usadas: %s\n", letrasUsadas);

        char letra;
        printf("Ingrese una letra: ");
        scanf(" %c", &letra);
        letra = tolower(letra); // Convierte la letra ingresada a minúscula

        if (strchr(letrasUsadas, letra) != NULL) {
            printf("Ya has usado esta letra. Inténtalo de nuevo.\n");
            continue;
        }

        letrasUsadas[strlen(letrasUsadas)] = letra;
        letrasUsadas[strlen(letrasUsadas)] = ' ';
        letrasUsadas[strlen(letrasUsadas)] = '\0';

        int letraCorrecta = 0;
        for (int i = 0; i < strlen(palabraSecreta); i++) {
            if (letra == tolower(palabraSecreta[i])) {
                letrasAdivinadas[i] = palabraSecreta[i];
                letraCorrecta = 1;
            }
        }

        if (letraCorrecta) {
            printf("Letra correcta\n");
        } else {
            printf("Letra incorrecta\n");
            intentos++;
        }

        if (strcmp(letrasAdivinadas, palabraSecreta) == 0) {
            printf("Felicidades, ganaste. La palabra era: %s\n", palabraSecreta);
            break;
        }
    }

    if (intentos == 7) {
        printf("Perdiste. La palabra correcta era: %s\n", palabraSecreta);
    }

    return 0;
}
