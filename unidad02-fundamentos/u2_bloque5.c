// BLOQUE 5: Bucles while
#include <stdio.h>

int main(){
    // Ejercicio 11: Muestra los números del 1 al 10 usando while.

    int max = 10; // Fin del WHILE
    int i = 1; // contador iniciado en 1
    while (i <= max) // El WHILE se ejecuta mientras el contador i sea menor O igual que el max (si pones i < max, se para antes)
    {
        printf("%d \n",i);
        i++; // Incremento el contador en 1 (esto es igual que i = i +1;)
    }

    // Ejercicio 12: Muestra los números pares del 1 al 20 usando while
    printf("\nEjercicio 12: Muestra los números pares del 1 al 20 usando while\n");
    int max20 = 20;
    int contador = 2; // Contador iniciado en dos (el primer numero par)
    while (contador <= max20)
    {
        printf("%d \n", contador);
        contador = contador + 2;
    } 

    // Ejercicio 13: Pide un número y muestra su cuenta regresiva hasta 0.
    printf("\nEjercicio 13: Pide un número y muestra su cuenta regresiva hasta 0.\n");
    int num; // Declaramos la variable pero no la inicializamos, se le pide al usuario
    printf("Entra un numero: ");
    scanf("%d",&num);

    while (num >=0) // WHILE se ejecuta hasta que el numero llega a cero (incl el cero)
    {
        printf("%d\n", num);
        num--; // Decrementa num en 1 (igual que num = num - 1;)
    }
    return 0;
}
