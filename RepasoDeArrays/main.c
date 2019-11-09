#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 3
void mostrarUnArray(int parametroArray[],int cant);
void inicializarUnArray(int parametroArray[],int cant,int inicializacion);
void cargaSecuencialUnArray(int parametroArray[],int cant,char mensaje[]);
int DameElMaximo(int parametroArray[],int cant);
int DameElIndicedelMaximo(int parametroArray[],int cant);
void ordenarDesc(int parametroArray[],int cant);
void ordenarAsc(int parametroArray[],int cant);



int main()
{
    int miArray[CANTIDAD];
    inicializarUnArray(miArray,CANTIDAD,-1);
    cargaSecuencialUnArray(miArray,CANTIDAD,"\n ingrese su edad : ");
   // cargaSecuencialUnArray(miArray,CANTIDAD,"ingrese su altura");
   // cargaSecuencialUnArray(miArray,CANTIDAD,"ingrese temperatura");
    mostrarUnArray(miArray,CANTIDAD);
    int maximo=DameElMaximo(miArray,CANTIDAD);
    printf("\n\n maximo :%d",maximo);//66 o 3

    int indiceMaximo=DameElIndicedelMaximo(miArray,CANTIDAD);//66
    printf("\n\n Indice :%d",indiceMaximo);// 1 o 2
    ordenarAsc(miArray,CANTIDAD);
    printf("\n\n orden asc\n ");
    mostrarUnArray(miArray,CANTIDAD);
    ordenarDesc(miArray,CANTIDAD);
        printf("\n\n orden Desc \n ");
    mostrarUnArray(miArray,CANTIDAD);



    return 0;
}
void mostrarUnArray(int parametroArray[],int cant)
{
    int indice;
    for(indice=0;indice<cant;indice++ )    {
       printf("\n numero: %d" ,parametroArray[indice]);
    }
}
void inicializarUnArray(int parametroArray[],int cant,int inicializacion)
{
    int indice;
    for(indice=0;indice<cant;indice++ ){
       parametroArray[indice]=inicializacion;
    }
}
void cargaSecuencialUnArray(int parametroArray[],int cant,char mensaje[])
{
    int indice;
    for(indice=0;indice<cant;indice++ )    {
        printf(mensaje);
        scanf("%d" ,&parametroArray[indice]);
    }
}
int DameElMaximo(int parametroArray[],int cant)
{
    int indice;
    int maximo;
    for(indice=0;indice<cant;indice++ ){
       if(indice ==0 || parametroArray[indice]>maximo){
           maximo= parametroArray[indice];
       }
    }
    return maximo;
}
int DameElIndicedelMaximo(int parametroArray[],int cant)
{
    int indice;
    int indiceDelMaximo;
    int maximo;
    for(indice=0;indice<cant;indice++ ){
       if(indice ==0 || parametroArray[indice]>maximo){
           maximo=parametroArray[indice];
           indiceDelMaximo= indice;
       }
    }
    return indiceDelMaximo;
}
int DameElIndicedelMaximoVersionPro(int parametroArray[],int cant)
{
    int indice;
    int indiceDelMaximo;
    int maximo;
    maximo=DameElMaximo(parametroArray,cant);
    for(indice=0;indice<cant;indice++ ){
       if( parametroArray[indice]==maximo){
          indiceDelMaximo= indice;
       }
    }
    return indiceDelMaximo;
}

void ordenarDesc(int parametroArray[],int cant){
    int indice;
    int Siguiente;
    int aux;
    for(indice=0;indice<cant-1;indice++ ){
        for(Siguiente=indice+1;Siguiente<cant;Siguiente++){
            if(parametroArray[indice]<parametroArray[Siguiente]){
                aux=parametroArray[indice];
                parametroArray[indice]=parametroArray[Siguiente];
                parametroArray[Siguiente]=aux;
            }
        }
    }

}

void ordenarAsc(int parametroArray[],int cant){
    int indice;
    int Siguiente;
    int aux;
    for(indice=0;indice<cant-1;indice++ ){
        for(Siguiente=indice+1;Siguiente<cant;Siguiente++){
            if(parametroArray[indice]>parametroArray[Siguiente]){
                aux=parametroArray[indice];
                parametroArray[indice]=parametroArray[Siguiente];
                parametroArray[Siguiente]=aux;
            }
        }
    }

}





