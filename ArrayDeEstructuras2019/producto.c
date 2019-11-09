#include <stdio.h>
#include <string.h>
#include "producto.h"

int insertProducto(eProducto,eProducto[]);
int dameLugarLibre(eProducto[] ) ;
int existeProducto(eProducto,eProducto[]);
int borrarProducto(eProducto,eProducto[]);
int editarProducto(eProducto,eProducto[]);

int insertProducto(eProducto elProducto,eProducto listado[])
{
    int indice;
    indice=dameLugarLibre(listado);
    if(indice!=-1)
    {
        listado[indice]=elProducto;
    }
    return indice;
}




int borrarProducto(eProducto elProducto,eProducto listado[])
{
    int indice;
    indice=existeProducto(elProducto,listado);
    if(indice!=-1)
    {
        listado[indice].estado=-1;
    }
    return indice;
}



void construirArray( int tam,eProducto listado[])
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i].estado=0;
        strcpy(listado[i].nombre,"");
        strcpy(listado[i].codigoDeBarra,"");
        strcpy(listado[i].fechaDeVencimiento,"");
        strcpy(listado[i].proveedor,"");

        listado[i].precio=0;

    }
}

void mostrarArray( int tam,eProducto listado[])
{
    int i;
    for(i=0; i<tam; i++)
    {
      // listado[i]=();
      mostrarProducto(listado[i]);
    }
}
void cargarArray( int tam,eProducto listado[])
{
    int i;
    for(i=0; i<tam; i++)
    {

       listado[i]=pedirProducto();
    }
}

eProducto pedirProducto()
{

    eProducto productoParaRetornar;

    printf("Ingrese codigoDeBarra: ");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

     printf("Ingrese fechaDeVencimiento: ");
    fflush(stdin);
    gets(productoParaRetornar.fechaDeVencimiento);

    printf("Ingrese precio: ");
    scanf("%f", &productoParaRetornar.precio);

     printf("Ingrese proveedor: ");
    fflush(stdin);
    gets(productoParaRetornar.proveedor);


    return productoParaRetornar;

}
void mostrarProducto(eProducto elParametroProducto )
{
    printf("\n\n\n \t\t<<<< Producto >>>> \n");
    printf("\nAtributo \t Valor ");
    printf("\n------------------------");
    printf("\nCodigo :\t %s",elParametroProducto.codigoDeBarra);
    printf("\nNombre :\t %s",elParametroProducto.nombre);
    printf("\nProveedor :\t %s",elParametroProducto.proveedor);
     printf("\nEstado :\t %d",elParametroProducto.estado);
    printf("\nFehc venc :\t %s \n\n",elParametroProducto.fechaDeVencimiento);


}
