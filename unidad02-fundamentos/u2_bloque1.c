// UNIDAD 2 -  BLOQUE 1: Variables, tipos de datos y operadores básicos
#include <stdio.h>

int main(){

    // Ejercicio 1: Declara las siguientes variables en C e inicialízalas con valores adecuados:
    //    Un entero llamado edad
    //    Un float llamado precio
    //    Un carácter llamado letra
    // Muestra por pantalla cada variable utilizando printf.

    int edad = 25;
    float precio = 127.99;
    char letra = 'A';
    // Usando un printf para cada variable por separado
    printf("Edad: %d\n", edad);
    printf("Precio: %.2f\n", precio);
    printf("Letra: %c\n",letra);

    // Usando un solo printf para las 3 variables
    printf("Edad: %d\nPrecio: %.2f\nLetra: %c\n",edad,precio,letra);


    // Ejercicio 2: Realiza las siguientes operaciones y muestra el resultado:
    //     15 + 7
    //     20 - 4
    //     6 * 3
    //    10 / 2
    //    10 % 3
    // Indica en comentarios si el resultado es entero o decimal.
    
    //     15 + 7
    int var1 = 15;
    int var2 = 7;
    int resultado1 = var1 + var2; // Resultado1 es int
    // printf(15 + 7); Esto no funciona :) porque printf espera un string
    printf("Resultado1 = %d\n", resultado1); 

    //     20 - 4
    int var3 = 20;
    int var4 = 4;
    int resultado2 = var3 - var4; // Resultado2 es int
    printf("Resultado2 = %d\n", resultado2); 

    //     6 * 3
    int var5 = 10;
    int var6 = 3;
    int resultado3 = var5 * var6; // Resultado3 es int
    printf("Resultado3 = %d\n", resultado3); 

    //    10 / 3
    float var7 = 10;
    float var8 = 3;
    float resultado4 = var7 / var8; // Resultado4 es float si divides dos floats
    printf("Resultado 10/3 como float = %f\n", resultado4); 
    // Tambien puede declararse como int, pero el resultado ignora los decimales. 
    // Dividiendo 10/2 no es problema porque es un entero, pero dividiendo 10/3 da resultado diferente (int da resultdo=3 pero float da 3.33333)
    int resultado5 = var7 / var8;
    printf("Resultado 10/3 como int = %d\n", resultado5); 

    //    10 % 3
    int var9 = 10;
    int var10 = 3;
    int resultado6 = var9 % var10;// Resultado5 es int (el resto es un entero)
    printf("Resultado6 = %d\n", resultado6); 


// Ejercicio 3: Declara dos variables enteras a = 5 y b = 10.
// Calcula y muestra:
//     a > b
//     a < b
//     a == b
//     a != b
// Explica en comentarios el resultado (0 o 1)

int a = 5;
int b = 10;

printf("a= %d, b= %d\n",a,b);
printf("a > b: %d\n", a>b); //     a > b: falso = 0
printf("a < b: %d\n", a<b); //     a < b: verdadero = 1
printf("a == b: %d\n", a==b); //     a == b: falso = 0
printf("a != b: %d\n", a!=b); //     a != b: verdadero = 1

return 0;
}