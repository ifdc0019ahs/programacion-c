/* Ejercicio B - Operaciones con bucles

Realiza un programa en C que solicite un número entero positivo al usuario y utilice un bucle for para mostrar información en pantalla. 
El programa deberá:
    Declarar correctamente las variables necesarias. → 0,5 puntos
    Solicitar y almacenar el número introducido por el usuario. → 0,5 puntos
    Crear correctamente un bucle for. → 1,5 puntos
    Mostrar los números desde 1 hasta el número introducido. → 0,5 puntos
    Mostrar únicamente los números pares del recorrido utilizando el operador %. → 1,5 puntos
    Mostrar los resultados con mensajes claros y ordenados en pantalla. → 0,5 puntos
    Utilizar comentarios en el código. → 0,5 puntos
*/

#include <stdio.h>

int main ()
{
    // Pedir datos y declarar variables
    int limite = 0; // limite es numero entero (int). Inicializamos a cero

    printf("=========================================\n");
    printf("======== IFDC0019: AMADO HIDALGO ========\n");
    printf("== Ejercicio B: Operaciones con bucles ==\n");  
    printf("=========================================\n"); 

    do // Bucle para pedir limite y asegurar que es un numero positivo. En este ejemplo sencillo, NO vamos a verificar otras restricciones (e.g. string, float)
    {
        printf("Entra el maximo valor del bucle (limite): "); // Mensaje explicativo
        scanf("%d", &limite); // Usamos scanf para pedir valor al usuario %d indica numero entero
    } while (limite <= 0); // Repite si 'limite' es cero o negativo.

    // Mostrar los números desde 1 hasta el número introducido usando bucle FOR
    printf("Mostrar los números desde 1 hasta el %d usando bucle FOR \n",limite);
    for (int i = 1; i <= limite; i++) // Iniciamos contador 'i" con valor 1, incrementamos de 1 en 1 (i++)
    {
        printf("%d\n",i);
    }

    // Mostrar únicamente los números pares del recorrido utilizando el operador %
    printf("Mostrar los números pares hasta el %d \n",limite);
    
    /* Este es el metodo mas sencillo, pero piden que hay que usar %
    for (int j = 0; j <= limite; j = j+2) // Iniciamos contador 'j' con valor 0, incrementamos de 2 en 2. NOTA: Cero se considera numero par
    {
        printf("%d\n",j);
    }
    */ 

    for (int k = 0; k <= limite; k++) // Iniciamos contador 'k" con valor 0, incrementamos de 1 en 1 (k++). NOTA: Cero se considera numero par
    {
        if ((k%2 == 0)) // k es par (el resto de dividir por 2 es 0)
        {
            printf("%d\n",k);
        } // Nota: no hace falta ELSE ya que si no es par, no hay que imprimir el contador
    }
    return 0; // Salimos del programa de forma ordenada (0 = life is good!)
}