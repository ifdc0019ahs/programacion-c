// Vamos a practicar los bucles en C
// Bucles: WHILE, FOR y DO ... WHILE

#include <stdio.h>

int main() {
    // Bucle WHILE
    printf("Bucle WHILE: \n"); // Mensajillo para indicar primer bucle WHILE
    int contador = 1; // Iniciamos el contador
    while (contador <=5){ 
        // Vamos a ejecutar bucle hasta que el contador es menor o igual que 5
        printf("%d\n", contador);
        contador++; // Incrementa contador en 1. Esto equivale a contador = copntador +1
    }
}