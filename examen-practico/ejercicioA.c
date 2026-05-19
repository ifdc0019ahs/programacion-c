/* Ejercicio A - Operaciones básicas

Realiza un programa en C que solicite al usuario su edad y la nota de un examen. 
El programa deberá:
    Declarar correctamente las variables necesarias. → 0,5 puntos
    Solicitar y almacenar la edad del usuario. → 0,5 puntos
    Solicitar y almacenar la nota del examen. → 0,5 puntos
    Calcular cuántos años faltan para cumplir 100 años utilizando operadores matemáticos. → 0,5 puntos
    Mostrar si la nota es mayor o igual a 5 utilizando operadores de comparación. → 0,5 puntos
    Utilizar una estructura if para indicar si el usuario es mayor de edad. → 0,5 puntos
    Utilizar el operador lógico && para comprobar si el usuario es mayor de edad y además ha aprobado. → 1 punto
    Mostrar los resultados con mensajes claros y ordenados en pantalla. → 0,5 puntos
    Utilizar comentarios en el código. → 0,5 puntos
*/

#include <stdio.h>

int main ()
{
    // Pedir datos y declarar variables
    int edad = 0; // Edad es numero entero (int). Inicializamos a cero
    float nota = 0.0; // Nota es un decimal (float). Inicializamos a cero

    printf("==============================\n"); 
    printf("== IFDC0019: AMADO HIDALGO ==\n");
    printf("== Ejercicio A: Edad y Nota ==\n");  
    printf("==============================\n"); 

    do // Bucle para pedir edad y asegurar que es un numero positivo. En este ejemplo sencillo, NO vamos a verificar otras restricciones (e.g. string, float)
    {
        printf("Entra tu edad: "); // Mensaje explicativo
        scanf("%d", &edad); // Usamos scanf para pedir valor al usuario %d indica numero entero
    } while (edad < 0); // Repite si edad es negativo. NOTA: Podiamos repetir tambien si edad es > 100 
    
    do  // Bucle para pedir nota y asegurar que es un numero positivo. En este ejemplo sencillo, NO vamos a verificar otras restricciones (e.g. string)
    {
        printf("Entra la nota del examen: "); // Mensaje explicativo
        scanf("%f", &nota); // Usamos scanf para pedir valor al usuario %f indica numero decimal (float)
    } while (nota < 0.0);
    
    // Calcular cuántos años faltan para cumplir 100 años utilizando operadores matemáticos
    printf("Te faltan %d años para los 100 \n", (100-edad)); // Podriamos tb poner un IF por si el usuario habia entrado un valor > 100

    // Mostrar si la nota es mayor o igual a 5 utilizando operadores de comparación.
    if (nota >= 5.0)
    {
        printf("Enhorabuena, tu nota %.2f indica que has aprobado\n", nota); // Si la nota es >= 5, es aprobado
    } else printf("Lo siento, esta nota %.2f es un suspenso\n", nota); // Si no, es suspenso

    // Utilizar el operador lógico && para comprobar si el usuario es mayor de edad y además ha aprobado.
    if ((edad >= 18) && (nota >=5.0)) // Ambas variables deben ser ciertas (1)
    {
        printf("Edad = %d y Nota = %.2f significa que eres mayor de edad y además has aprobado\n",edad,nota);
    } else printf("Edad = %d y Nota = %.2f significa que o NO eres mayor de edad o NO has aprobado\n",edad,nota); // Si alguna de las variables no es cierta

    return 0; // Salimos del programa de forma ordenada (0 = life is good!)
}
