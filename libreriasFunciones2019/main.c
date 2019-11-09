#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"
#include "misFunciones.h"
void porValor(int numero);
void porPuntero(int *numero);
int main()
{
    // HacerCalculo();
    int numero=777;
    porValor(numero);
    printf("por valor es :%d", numero);
    porPuntero(&numero);
    printf("por referencia es :%d", numero);

    return 0;
}
void porValor(int numero)
{
    numero=222;
}
void porPuntero(int *numero)
{
    *numero=333;
}


