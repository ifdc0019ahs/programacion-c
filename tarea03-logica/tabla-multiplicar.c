/* Ejercicio 5 — Tabla de multiplicar personalizada
Enunciado: Solicitar al usuario:
    un número
    y hasta qué valor quiere multiplicarlo
Mostrar la tabla de multiplicar correspondiente.

Ejemplo
    Número: 4
    Hasta: 6
Resultado:
    4 x 1 = 4
    4 x 2 = 8
    4 x 3 = 12
    4 x 4 = 16
    4 x 5 = 20
    4 x 6 = 24

Requisitos: Validar que el límite sea positivo.

Pistas: Puede resolverse:
    con for
    con while
    usando funciones
    separando validaciones y cálculos
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
    bienvenida("TABLA DE MULTIPLICAR"); // Mensajillo de bienvenida (funcion reusada)
    int tablaDe = 0; // La tabla de que numero
    int hasta = 0; // Hasta qué valor quiere multiplicarlo

    tablaDe = pedirEntero("Entra el numero para sacar su tabla de multiplicar: ");
    hasta = pedirEntero("Entra hasta qué valor quieres multiplicarlo: ");

    for (int i = 1; i <= hasta; i++)
    {
        printf("%d x %d = %d \n",tablaDe, i, tablaDe*i);
    }
    return 0;
}   