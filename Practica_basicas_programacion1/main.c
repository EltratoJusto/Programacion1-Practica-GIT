#include <stdio.h>
#include <stdlib.h>

/*FUNCION SUMA*/
int suma(int a, int b)
{
int suma=0;

    suma=a+b;

return suma;
}

int main()
{
    int a=7;
    int b=5;

    int resultado_suma=suma(a,b);

    printf("El resultado de la suma es %d", resultado_suma);

    return 0;
}
