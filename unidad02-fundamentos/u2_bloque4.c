// BLOQUE 4: switch

#include <stdio.h>

int main(){
    // Ejercicio 9: Crea un programa que reciba un número del 1 al 5 y muestre:
    //  1 → Lunes
    //  2 → Martes
    //  3 → Miércoles
    //  4 → Jueves
    //  5 → Viernes
    // Si el número no está en ese rango, mostrar “Día no válido”.

    int dia; // Declarando variable entera
    printf("Entra un numero del 1 al 5: ");
    scanf("%d",&dia); // Pedimos el numero del dia al usuario

    switch (dia) // Evalua la expresion, en este caso simplemente se evalua el entero dia
    {
    case 1: // If expresion == valor, code execution starts here (Si dia es 1 ejecuta el primer bloque)
        printf("El dia %d es Lunes\n", dia);
        break; // Con esto se hace el exit a SWITCH y se deja de ejecutar el resto de los CASE. Si se te olvida el BREAK, sigue ejecutando el siguiente CASE
    case 2: // Si dia es 2 ejecuta el segundo bloque, etc
        printf("El dia %d es Martes\n", dia);
        break;
    case 3:
        printf("El dia %d es Miercoles\n", dia);
        break;
    case 4:
        printf("El dia %d es Jueves\n", dia);
        break;
    case 5:
        printf("El dia %d es Viernes\n", dia);
        break;
    
    default: // Optional. Executes if no cases match (like else in if-else). (Si dia no es ninguro de los de arriba ejecuta el bloque DEFAULT)
        printf("El numero %d NO esta en el rango permitido\n", dia);
        break;
    }

    // Ejercicio 10: Simula una calculadora simple con switch:
    //    1 → suma
    //    2 → resta
    //    3 → multiplicación
    //    4 → división
    //   Usa dos números fijos para las operaciones.

    printf("\nEjercicio 10: Simula una calculadora simple con switch:\n");

    int op; // Declarando varible "op", la operacion matematica
    float n1, n2; // Declarando dos floats
    float res; // Declarando el resultado (tb es float)

    printf("Entra numero1: ");
    scanf("%f", &n1); // Pedimos el primer numero al usuario
    printf("\nEntra numero2: ");
    scanf("%f", &n2); // Pedimos el primer numero al usuario
    printf("\nEntra codigo de la operacion (1 → suma, 2 → resta, 3 → multiplicación, 4 → división): ");
    scanf("%d", &op); // Pedimos el codigo de la operacion numero al usuario

    switch (op)
    {
    case 1:
        res= n1+n2;
        printf("%.2f + %.2f = %.2f \n", n1, n2, res);
        break;

    case 2:
        res= n1-n2;
        printf("%.2f - %.2f = %.2f \n", n1, n2, res);
        break;
    case 3:
        res= n1*n2;
        printf("%.2f * %.2f = %.2f \n", n1, n2, res);
        break;
    case 4:
        res= n1/n2;
        printf("%.2f / %.2f = %.2f \n", n1, n2, res);
        break;

    default: // Optional. Executes if no cases match. (Si op no es ninguro de los de arriba ejecuta el bloque DEFAULT)
        printf("La operacion %d NO esta reconocida\n", op);
        break;
    }
}
