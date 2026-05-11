// BLOQUE 2: Operadores lógicos y booleanos
#include <stdio.h>

int main(){
    // Ejercicio 4: Declara:    
    // int x = 8
    // int y = 3

    // Evalúa y muestra:
    // (x > 5) && (y < 5)
    // (x < 5) || (y < 5)
    // !(x > y)

    int x = 8;
    int y = 3;
    printf("Ejercicio 4: Declarar dos variables y realizar comparaciones logicas \n");

    // (x > 5) && (y < 5)
    printf("Evalua (x > 5) && (y < 5): %d\n",((x > 5) && (y < 5))); // 1=TRUE , 0=FALSE

    // (x < 5) || (y < 5)
    printf("Evalua (x < 5) || (y < 5): %d\n", (x < 5) || (y < 5));

    // !(x > y)
    printf("Evalua !(x > y): %d\n", !(x > y));

    // Ejercicio 5: Crea un programa que determine si un número es positivo y mayor que 10.
    // Usa una variable num
    // Usa operadores relacionales y lógicos
    // Muestra un mensaje indicando si cumple la condición o no

    int num = 7;
    printf("\nEjercicio 5: Crea un programa que determine si un número es positivo y mayor que 10. \n");

    if ((num >0) && (num>10)) {
        printf("El numero: %d es positivo y mayor que 10 \n", num);
    }
    else {
        printf("El numero: %d es NO positivo o mayor que 10 \n", num);
    }

    return 0;
}
