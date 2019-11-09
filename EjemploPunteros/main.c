#include <stdio.h>
#include <stdlib.h>
#include "funcionespuntero.h"

int main()
{

    int sepudo;
    float respuesta;
    int primerEdad;
    int segundaEdad;
    pedirEdad(&primerEdad);
    pedirEdad(&segundaEdad);
    sepudo=dividir(primerEdad,segundaEdad,&respuesta);
    if(sepudo==1)
    {
        printf("la respuesta es %f ",respuesta);
    }else
    {
        printf("no se puede");
    }


    /*
    int miEdad;

    while(pedirEdad(&miEdad)==0)
    {
        //nada
    }
    printf("su edad es %d",miEdad);
    */
    /*
    if(pedirEdad(&miEdad)==1)
    {
        printf("su edad es %d",miEdad);
    }else
    {
        printf("no se pudo");
    }
*/
    /*
    printf("Hello world!\n");
    verSiAnda();
    int sueldo;
    printf("\n lugar sueldo %d",&sueldo);
    sueldo= 10000;
    cambiarValor(sueldo);
    printf(" por valor :%d",sueldo);
    cambiarReferencia(&sueldo);
    printf("por referencia :%d",sueldo);


*/


    return 0;
}
