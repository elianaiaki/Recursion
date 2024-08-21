#include <stdio.h>


int calcularPotencia(int base, int exponente){
    if (exponente == 0 ){
        return 1;
    } else {
        return base * calcularPotencia(base , exponente - 1);  
    }
}
int main(){
    // Declaraciones
    int base;
    int exponente;

    // Ingreso de datos
    printf("Ingrese Base: ");
    scanf("%d", &base);
    printf("Ingrese Exponente: ");
    scanf("%d", &exponente);

    // Llamado a funcion
    int resultado = calcularPotencia(base, exponente);
    // Imprimir
    printf("Resultado de %d^%d es: %d", base, exponente, resultado); 
    return 0;
}
