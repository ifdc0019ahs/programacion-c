/* Ejercicio 3 — Menú de operaciones
Enunciado: Crear un menú que permita elegir entre varias operaciones matemáticas:
    1. Sumar
    2. Restar
    3. Multiplicar
    4. Dividir
    5. Salir

El usuario selecciona una opción y el programa realiza la operación.
Requisitos
    Solicitar dos números.
    Mostrar el resultado.
    Permitir repetir operaciones hasta elegir “Salir”.

Pistas: Puede resolverse:
    con switch
    con if / else
    usando funciones para cada operación
    con un bucle while
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

float pedirNumero(const char *mensaje)
// Función para pedir un numero al usuario
// Modificando la funcion usada en cajero-simple.c para que permita float (no solamente enteros)
// Aseguramos que el valor es un numero. Si no, se le vuelve a pedir hasta que lo sea
{
    float cantidad;
    do {
        printf("%s", mensaje);
        // NOTE: scanf doesn't handle invalid inputs gracefully. 
        // If you enter a string, scanf fails and leaves the invalid input in the buffer, 
        // and cantidad remains unchanged (or uninitialized in some cases), causing an infinite loop 
        // since the condition cantidad <= 0 is always true. 
        // Fixed by checking the return value of scanf. If it doesn't successfully read a float (returns != 1), 
        // it displays an error message, clears the input buffer, and continues the loop
        if (scanf("%f", &cantidad) != 1) {
            printf("\nEntrada inválida. Por favor, introduce un número\n");
            while (getchar() != '\n');
            cantidad = 0;
        }
    } while (cantidad == 0); // No permitimos el valor 0
    return cantidad;
}

int main()
{
    // Pedir datos
    bienvenida("CALCULADORA BASICA"); // Mensajillo de bienvenida (funcion reusada)
    float num1 = pedirNumero("Entra el primer numero: "); // Pedir primer numero
    printf("DEBUGGING (borrar antes de programa final); num1= %f \n", num1); // DEBUGGING 

    float num2 = pedirNumero("Entra el segundo numero: "); // Pedir segundo numero
    printf("DEBUGGING (borrar antes de programa final); num2= %f \n", num2); // DEBUGGING 

    int operacion = 0;
    do
    {
        float op = pedirNumero("Entra la operacion (1. Sumar | 2. Restar | 3. Multiplicar | 4. Dividir | 5. Salir): ");
        operacion = (int)op; // Casting para convertir el float a integer
        printf("DEBUGGING (borrar antes de programa final); operacion= %d \n", operacion); // DEBUGGING 
    } while ((operacion < 1) || (operacion > 5)); // Asegura que operacion es permitida
    
    // Procesar datos
    float resultado = 0.0;
    switch (operacion)
    {
    case 1: // 1. Sumar
        resultado = num1 + num2;
        printf("SUMA: %f + %f = %f\n",num1, num2, resultado);
        break;
    case 2: // 2. Restar
        resultado = num1 - num2;
        printf("RESTA: %f - %f = %f\n",num1, num2, resultado);
        break;
    case 3: // 3. Multiplicar
        resultado = num1 * num2;
        printf("MULTIPLICACION: %f * %f = %f\n",num1, num2, resultado);
        break;
    case 4: // 4. Dividir
        resultado = num1 / num2;
        printf("DIVISION: %f / %f = %f\n",num1, num2, resultado);
        break;
    case 5: // 5. Salir
        printf("SALIR");
        break;
    default:
        break;
    }

    // Mostrar resultados
    // printf("Resultado = %f\n",resultado);

    return 0;
}