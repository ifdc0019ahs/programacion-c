// Vamos a practicar los bucles en C
// Bucles: WHILE, FOR y DO ... WHILE

#include <stdio.h>

int main() {
    // Bucle WHILE
    // WHILE se usa cuando no conocemos el numero de ejecuciones, o no sabemos si se va a ejecutar alguna vez. 
    // Se repite el bucle mientras la condicion sea verdadera
    printf("Bucle WHILE: \n"); // Mensajillo para indicar primer bucle WHILE
    int contador = 1; // Iniciamos el contador  __fuera__ del bucle
    while (contador <=5){ 
        // Vamos a ejecutar bucle hasta que el contador es menor o igual que 5
        printf("%d\n", contador);
        contador++; // Incrementa contador en 1. Esto equivale a contador = copntador +1
    }

    // Bucle FOR
    // FOR se usa cuando conocemos o esperamos el numero de ejecuciones
    printf("Bucle FOR: \n"); // Mensajillo para indicar bucle FOR
    for (int i = 1; i <= 5; i++) {
        // Nota que el contador i se inicia, se compara y se incrementadentro del comando FOR
        // Vamos a ejecutar bucle hasta que el contador i es menor o igual que 5
        printf("%d\n", i);
    }

    // Bucle DO ... WHILE
    // DO ... WHILE se usa cuando queremos ejecutar el bloque de codigo al menos una vez
    // Se ejecuta AL MENOS 1 vez, y luego se repite el bucle mientras la condicion sea verdadera
    printf("Bucle DO ... WHILE: \n"); // Mensajillo para indicar bucle DO ... WHILE
    int numero = 1; // el contador se inicia __fuera__ del bucle
    do {
        printf("%d\n", numero);
        numero++; // Incrementa numero en 1. Esto equivale a numero = numero +1
        } while (numero <= 3); // El bucle se ejecuta al menos una vez, y se repite 2 veces porque la condicion es verdadera (hasta que es mayor o igual a 3)
 //     } while (numero >= 3); // El bucle se ejecuta al menos una vez, pero no se repite porque la condicion es falsa (numero es 2, que no es mayor o igual a 3)
}