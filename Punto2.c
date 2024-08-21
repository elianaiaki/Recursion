#include "cabecera.h"

void ContarConsonantes(char arreglo[], int i, int *contador) {
    if (i <= 12) { 
        char letra = arreglo[i];
        
        if (letra >= 'N' && letra <= 'Z') {
            if (letra != 'O' && letra != 'U' && letra != 'E' && letra != 'I') {
                (*contador)++;
                printf("%c\n", letra);
            }
        }
        
        ContarConsonantes(arreglo, i + 1, contador);
    } else {
        return 0;
    }
}

int main() {
    char arreglo[13] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int contador = 0;

    ContarConsonantes(arreglo, 0, &contador);
    
    printf("El número de consonantes posteriores a M es: %d\n", contador);
    
    return 0;
}
