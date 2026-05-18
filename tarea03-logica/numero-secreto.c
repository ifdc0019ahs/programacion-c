/* Ejercicio 2 — Número secreto
Enunciado: Crea un programa donde exista un número secreto. El usuario debe intentar adivinarlo.

El programa debe indicar:
    “Demasiado alto”
    “Demasiado bajo”
    “Correcto”
hasta acertar.
Requisitos: 
    El programa debe repetirse hasta acertar.
    Contar el número de intentos.

Pistas: Puede resolverse:
    con while
    con do while
    usando funciones
    utilizando break
*/

#include <stdio.h>
#include <stdlib.h> // Library to call the randon (rand) function
#include <time.h> // Library to use TIME to add seed

// Declarando funciones
void bienvenida(const char *mensaje)
// Función para mostrar un mensaje de bienvenida
{
    printf("=========================================================\n");
    printf("               %s\n",mensaje);
    printf("=========================================================\n");
}

int numeroSecreto()
// Función que devuelve un numero aleatorio entre el 1 y el 100 
{
    srand(time(NULL)); // Seed para que sea mas aleatorio, usando la hora actual como semilla
    return rand() % 100 + 1; // MAN: The rand() function computes a sequence of pseudo-random integers in the range of 0 to RAND_MAX (at least 32767).
}

int adivinarNumero()
// Función para pedir un numero al usuario
// Aseguramos que la cantidad es positiva. Si no, se le vuelve a pedir hasta que lo sea
{
    int cantidad;
    do {
        printf("Entra un numero entero: ");
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
    // Pedir datos
    bienvenida("ADIVINA EL NUMERO SECRETO"); // Mensajillo de bienvenida (funcion reusada)
    
    int secreto = numeroSecreto(); // Genera numero secreto
    printf("DEBUGGING (borrar antes de programa final); secreto= %d \n", secreto); // DEBUGGING 

    int adivina = adivinarNumero(); // Pide que adivine el numero
    printf("DEBUGGING (borrar antes de programa final); adivina = %d\n", adivina);  // DEBUGGING 
    
    // Procesar datos
    while (adivina != secreto)
    // No has acertado, tu numero no es igual al numero secreto
    {
        if (adivina > secreto)
        {
            printf("Demasiado Alto, prueba de nuevo\n");
        }
        else 
        {
            printf("Demasiado bajo, prueba de nuevo\n");
        }
        adivina = adivinarNumero(); // Pide que adivine de nuevo 
        printf("DEBUGGING (borrar antes de programa final); secreto = %d \n", secreto); // DEBUGGING 
        printf("DEBUGGING (borrar antes de programa final); adivina = %d\n", adivina);  // DEBUGGING 
    }

    // Mostrar resultados
    printf("Enhorabuena, has acertado! Tu numero era %d y el numero secreto es %d\n", adivina, secreto);

return 0;
}