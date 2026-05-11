// BLOQUE 3: Condicionales (if / else)
#include <stdio.h>

int main(){
    // Ejercicio 6: Solicita un número entero y determina:
    // Si es mayor o igual que 18 → "Eres mayor de edad"
    // Si no → "Eres menor de edad"

    int edad;

    printf("Cual es tu edad: ");
    scanf("%d", &edad); //To ask for user input in C, use the scanf() function from <stdio.h>
    // Mas info de chatGPT:  scanf() — Reads formatted input from the terminal
    // First argument: format specifier (what type of data to read)
    // Remaining arguments: pointers to variables where the input will be stored
    // The ampersand & — Required before variable names (EXCEPT strings)
    // &edad gives the memory address where scanf() stores the value

    if (edad>=18) {
        printf("Edad: %d significa que eres mayor de edad\n", edad);
    }
    else {
        printf("Edad: %d significa que eres menor de edad\n", edad);
    }

    // Ejercicio 7: Dado un número n, indica:
    // Si es positivo
    // Si es negativo
    // Si es cero

    printf("\nEjercicio 7: Dado un número n, indica si es positivo, negativo o cero\n");

    int n;

    printf("Entra un numero entero: ");
    scanf("%d", &n); // Pidiendo el numero al usuario por el terminal

    if (n > 0){
        printf("El numero %d es positivo \n",n);
    }
    else {  // Anidamos otro IF dentro del ELSE 
        if (n < 0){
            printf("El numero %d es negativo \n",n);
        }
        else {
            printf("El numero %d es cero \n",n);
        }
    }


    // Ejercicio 8: Solicita dos números y muestra cuál es mayor o si son iguales.
    printf("\n Ejercicio 8: Solicita dos números y muestra cuál es mayor o si son iguales. \n");

    int num1, num2;

    printf("Entra el primer numero: ");
    scanf("%d", &num1);
    printf("\nEntra el segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("%d es mayor que %d\n",num1, num2);
    }
    else{ // Igual que el ejemplo anterior, vamos a anidar otro IF dentro de este ELSE
        if (num1 < num2){
            printf("%d es menor que %d\n",num1, num2);
        }
        else{
            printf("%d es igual que %d\n",num1, num2);
        }
    }

    return 0;
}
