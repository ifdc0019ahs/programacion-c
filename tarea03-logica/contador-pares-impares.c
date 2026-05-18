/* Ejercicio 4 — Contador de números pares e impares
Enunciado: El usuario introducirá 10 números.
El programa debe indicar:
    cuántos son pares
    cuántos son impares

Requisitos: Mostrar el resultado final al terminar.

Pistas: Puede resolverse:
    con for
    con while
    usando %
    creando funciones para comprobar si un número es par
*/ 

#include <stdio.h>

// Declarando funciones
void bienvenida(const char *mensaje)
// Función para mostrar un mensaje de bienvenida
{
    printf("=========================================================\n");
    printf("               %s\n",mensaje);
    printf("=========================================================\n");
}

int pedirEntero(const char *mensaje)
// Función para pedir un numero entero al usuario
// Aseguramos que el valor es un numero y positivo. Si no, se le vuelve a pedir hasta que lo sea
// El parametro (const char *mensaje) se usa para mostrar un mensaje (que le pedimos al usuario)
{
    int cantidad;
    do {
        printf("%s", mensaje);
        // NOTE: scanf doesn't handle invalid inputs gracefully. 
        // If you enter a string, float, or non-integer, scanf fails to read an integer, leaves the invalid input in the buffer, 
        // and cantidad remains unchanged (or uninitialized in some cases), causing an infinite loop 
        // since the condition cantidad <= 0 is always true. 
        // Fixed by checking the return value of scanf. If it doesn't successfully read an integer (returns != 1), 
        // it displays an error message, clears the input buffer, and continues the loop
        if (scanf("%d", &cantidad) != 1) {
            printf("\nEntrada inválida. Por favor, introduce un número entero positivo.\n");
            while (getchar() != '\n');
            cantidad = 0;
        }
    } while (cantidad <= 0);
    return cantidad;
}

int main()
{
    // Pedir datos e iniciar variables
    bienvenida("CONTADOR DE PARES E IMPARES"); // Mensajillo de bienvenida (funcion reusada)
    int cuantosPares = 0; // Contador de pares
    int cuantosImpares = 0; // Contador de impares
    int valores[10]; // Array de 10 numeros enteros

    for (int i = 0; i < 10; i++)
    {
        printf("Entra el valor numero %d (ignoraré decimales)", i+1);
        valores[i] = pedirEntero(": "); // Pido un numero, me aseguro que es entero y lo almaceno en la posicion i de la array
        if ((valores[i]%2)==0) //el valor es par (el resto de dividir por 2 es cero) 
        {
            cuantosPares++;
        }
        else cuantosImpares++;
    }
printf("Hay %d numeros pares en tu array \n",cuantosPares);
printf("Hay %d numeros impares en tu array \n",cuantosImpares);
return 0;
}