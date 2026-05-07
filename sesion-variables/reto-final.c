/* PRIMEROS PASOS EN PROGRAMACIÓN EN C: RETO FINAL 
Objetivo: Crear un programa completo utilizando:
    comentarios
    variables
    printf
    saltos de línea
    El programa debe mostrar:
    * Nombre
    * Edad
    * Ciudad
    * Altura

Utilizando variables.
*/
#include <stdio.h>
int main() {
    // char nombre = 'Amado'; //ERROR: character constant too long for its type, es decir, char es SOLO un caracter
    //str nombre = 'Amado'; // Nombre debe ser STRING. Pero str no es tipo valido en C (esto es python!!)
    char nombre[] = "Amado"; // En C, strings are arrays of characters (e.g., char nombre[] = "Amado";)
    int edad = 25;
    char ciudad[] = "Madrid";
    float altura = 1.80;

    // printf("Nombre: %c\n", nombre); // Esto esta mal... %s for strings (not %c, which is for single characters).
    printf("Nombre: %s\n", nombre); // nombre es string (char array)
    printf("Edad: %d\n", edad); // edad es decimal (int)
    printf("Ciudad: %s\n", ciudad); // ciudad es  es string (char array)
    printf("Altura: %.2f\n", altura); // altura es float (dos decimales)
    return 0;
}