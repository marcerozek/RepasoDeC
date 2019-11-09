#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int dameEdad(int *edad, char *mensaje);
int dameEdadTres(int *edad, char *mensaje);
int dameEdadDos(int *edad, char *mensaje);

int main()
{
    int miEdad;
    int seCargo;
    do
    {
        seCargo=dameEdadTres(&miEdad,"\nQue edad tenes? : ");

    }while(seCargo==0);

    printf("la edad ingresada es :%d",miEdad);
    /*
    seCargo=dameEdadTres(&miEdad,"\nQue edad tenes? : ");
    if(seCargo==1)
    {
        printf("la edad ingresada es :%d",miEdad);
    }
    else
    {
        printf("error de carga");
    }
*/


    /*
    int aEdades[CANTIDAD_ALUMNOS] = {2,51,1,8,0};
    getArrayInt("Ingrese edad","Edad invalida",120,0,5,aEdades,CANTIDAD_ALUMNOS);
    printArrayInt(aEdades,CANTIDAD_ALUMNOS);
    sortArrayInt(aEdades,CANTIDAD_ALUMNOS);
    printf("\n\nORDENADO\n");
    printArrayInt(aEdades,CANTIDAD_ALUMNOS);
    */
}
int dameEdad(int *edad, char *mensaje)
{
    int sePudo=0;
    int aux;
    printf(mensaje );
    sePudo=scanf("%d",&aux);
    if(sePudo==1)
    {
        //edad=aux;
        *edad=aux;
    }
    return sePudo;

}
int dameEdadDos(int *edad, char *mensaje)
{
    int sePudo=1;
    char cadedaIngresada[20];
    printf(mensaje);
    scanf("%s",cadedaIngresada);
    *edad=atoi(cadedaIngresada);

    return sePudo;

}

int dameEdadTres(int *edad, char *mensaje)
{
    int sePudo=1;
    int i;
    char cadedaIngresada[20];
    printf(mensaje);
    scanf("%s",cadedaIngresada);
    for(i=0;i< strlen(cadedaIngresada);i++)
    {
        if(cadedaIngresada[i]<'0' ||cadedaIngresada[i]>'9' &&cadedaIngresada[i]!="\0"  )
        {
            sePudo=0;
        }
    }
    if(sePudo==1)
    {
        *edad=atoi(cadedaIngresada);
    }
    return sePudo;

}
