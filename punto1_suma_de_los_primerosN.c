#include "cabecera.h"

int main() {
    int n;
    printf("Agregue un valor a n\n");
    scanf("%d", &n); 
    
    int sumaN = sumaNaturales(n);
    
    printf("La suma de los primeros números naturales es %d\n", sumaN);

    return 0;
}

int sumaNaturales(int n) {
    if (n == 0) {
        return 0;  
    } else {
        return n + sumaNaturales(n - 1); 
    }
}

