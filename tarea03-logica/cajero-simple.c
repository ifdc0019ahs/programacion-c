/* Ejercicio 1 — Cajero automático simple
Enunciado: Un usuario introduce una cantidad de dinero para retirar.
El programa debe indicar:
    cuántos billetes de 20 €
    cuántos billetes de 10 €
    y cuántas monedas de 1 €
se necesitan para entregar esa cantidad.

Ejemplo: Si el usuario introduce: 57
El programa podría mostrar:
    2 billetes de 20
    1 billete de 10
    7 monedas de 1

Requisitos
    La cantidad debe ser positiva.
    Pensar distintas formas de resolverlo.

Pistas: Este ejercicio puede resolverse:
    con divisiones y restos (/ y %)
    con while
    usando funciones
    sin usar funciones
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

int pedirEntero()
// Función para pedir una cantidad de dinero al usuario
// Aseguramos que la cantidad es positiva. Si no, se le vuelve a pedir hasta que lo sea
{
    int cantidad;
    do {
        printf("Entra una cantidad de dinero a retirar (ignoraré decimales): ");
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

void cambio (int cantidadARetirar, int billetes[3]) 
// Funcion para sacar el cambio en billetes de 20, de 10 y de 1 euro
// Input: Un numero entero (cantidadARetirar) y un array de 3 integers (billetes[3])
// Output: Saca tres valores en un array
{
    billetes[0] = cantidadARetirar / 20; // Cuantos blletes de 20 € (division entera, ignora el resto)
    billetes[1] = (cantidadARetirar %20) / 10; // Cuantos blletes de 10 € (divide el resto de dividir por 20 entre 10, ignora el resto)
    billetes[2] = cantidadARetirar %10; // Cuantos monedas de 1 € (el resto de dividir por 10) 
}

int main() {

    // Pedir datos
    bienvenida("WELCOME TO AMADO BANK"); // Mensajillo de bienvenida (funcion reusada)
    int cantidadARetirar = pedirEntero();
    printf("\nHas entrado la Cantidad a retirar de: %d euros\n", cantidadARetirar);
    
    // Procesar datos
    int cambioArray[3]; // Array de tres integers 
    cambio (cantidadARetirar, cambioArray); // llamar a la funcion cambio(), resultado se almacena en cambioArray

    // Mostrar resultados
    printf("Te voy a dar: \n");
    printf("==> %d billetes de 20 €\n",cambioArray[0]);
    printf("==> %d billetes de 10 € \n",cambioArray[1]);
    printf("==> %d monedas de 1 €\n",cambioArray[2]);
    printf("Gracias por visitar AMADO BANK. Vuelve muy pronto \n");

    return 0;
}