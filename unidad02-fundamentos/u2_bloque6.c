// BLOQUE 6: bucles for
#include <stdio.h>

int main(){

    // Ejercicio 14: Muestra la tabla de multiplicar del 5 (del 1 al 10)
    int tablaDel = 5; // Que tabla de multiplicar quiero sacar
    int max = 10; // Hasta que numero quiero hacer la tabla

    printf("Tabla del %d\n", tablaDel);

    for (int i = 1; i <= max; i++) // Empieza desde el 1 hasta el max, incementando de 1 en 1
    {
        printf("%d x %d = %d\n", i, tablaDel, i*tablaDel);
    }

    // Ejercicio 15: Muestra los números del 1 al 50 que sean múltiplos de 3.
    printf("\n Ejercicio 15: Muestra los números del 1 al 50 que sean múltiplos de 3.\n");
    int multiplosDe = 3; // Multiplos de que numero
    int max2 = 50; // Hasta que valor
    
    for (int j = multiplosDe; j <= max2; j=j+multiplosDe)
    {
        printf("%d\n",j);
    }
    

    // Ejercicio 16: Calcula la suma de los números del 1 al 100 utilizando for.
    printf("\nEjercicio 16: Calcula la suma de los números del 1 al 100 utilizando for.\n");
    int max3 = 100; // Hasta que valor sumo?
    int suma = 0; // Variable para guardar la suma, inicializando a cero

    for (int k = 0; k <= max3; k++)
    {
        suma = suma + k; // Sumando el valor de suma al anterior
    }
    printf("Suma de los numeros del 1 al %d = %d\n", max3, suma);


    // Ejercicio 17: Crea un programa que:
    //    Pida un número al usuario
    //    Determine si es positivo, negativo o cero
    //    Si es positivo:
    //        Mostrar su tabla de multiplicar del 1 al 10
    //    Si es negativo:
    //        Mostrar su valor absoluto
    // Usa:    if / else, bucle for o while, operadores aritméticos y relacionales

    printf("\nEjercicio 17: Pedir numero, si positivo, sacar tabla de multiplicar, si negativo, su valor absoluto \n");

    // Pido un numero al usuario
    int n; 
    printf("Entra un numero entero: ");
    scanf("%d",&n);

    if (n > 0) { // El numero es positivo -> Sacar su tabla de multiplicar (hasta el 10)
        printf("El numero %d es positivo, sacando la tabla del %d \n",n,n);
        for (int ii = 0; ii <=10; ii++)
        {
            printf("%d x %d = %d\n", ii, n, ii*n);
        }
    }
    else { //El numero es negativo (o cero)
        if (n < 0){ // El numero es negativo -> Sacar el valor absoluto
        printf("El numero %d es negativo, sacando su valor absoluto = %d \n",n,-n);
        }
        else { // El numero es cero
            printf("El numero %d es cero\n",n);
        }
    }
    return 0; 
}


/*else {  // Anidamos otro IF dentro del ELSE 
        if (n < 0){
            printf("El numero %d es negativo \n",n);
        }
        else {
            printf("El numero %d es cero \n",n);
        }*/