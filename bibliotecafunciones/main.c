#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
int EsUnNumero(char *cadena,int tamaño)
{
    int indice=0;
    int retorno=0;
     //printf("\npalabra por parametros %s",cadena);
     while(cadena[indice]!='\0')
     {
         if(cadena[indice]<'0' ||cadena[indice]>'9'  )
         {
             break;
         }else{
            indice++;
         }
     }
     if(cadena[indice]=='\0')
     {
         retorno=1;
     }
     return retorno;


}

int main()
{
    char letra;
    char palabra[10];
    int numero;
    int es;
    scanf("%s",&palabra);
    fflush(stdin);
    printf("\npalabra ingresada %s",palabra);

    es=EsUnNumero(palabra);
    if(es==1)
    {
        printf("es correcto");
    }else{
        printf("no lo es");
    }


    /*
    int indice=0;

    while(indice<20)
    {
        if(palabra[indice]=='\0')
        {
            printf("el barra cero esta en %d",indice);
        }
         printf("\nletra %c",palabra[indice]);
         indice ++;
    }

*/

/*
    scanf("%d",&numero);
    fflush(stdin);
    printf("\nnumero %d",numero);

    scanf("%c",&letra);
    fflush(stdin);
    printf("\nletra %c",letra);
*/


   /*
    int miDato=333;
    cambiarValor(miDato);
    printf("mi dato es :%d",miDato);
    cambiarValorReferencia(&miDato);
    printf("mi dato es :%d",miDato);
    */






//saludar();
    /* int unFactorial;
     unFactorial= factorial(24);
     printf("la factorial es : %d",unFactorial);
     */
     /*int dato;
    dato=dividir(6);
     printf("la dato es : %d",dato);
     dato=dividir(0);
     printf("la dato es : %d",dato);
     */
    /*int edad;
    int retorno;
    do{
        printf("ingrese una edad : ");
        sca
        retorno=scanf("%d",&edad);
        fflush(stdin);
    }while(retorno==0);

    printf("la respuesta es : %d",retorno);
    printf("la edad es : %d",edad);
    */

    return 0;
}






