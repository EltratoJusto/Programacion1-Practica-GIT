#include <stdio.h>
#include <stdlib.h>
#include "Libreria_practica.h"

int main()
{
    int a;
    int b;

    // Solicitio el ingreso de los numeros a sumar
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &b);

    // Llamo a la funcion y retorno el resultado
    int resultado_suma=suma(a,b);

    printf("El resultado de la suma de %d y %d es %d.", a, b, resultado_suma);

    return 0;
}
