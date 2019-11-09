#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

typedef struct
{
    char codigoDeBarra[13];
    float precio;
    char nombre[50];
    char fechaDeVencimiento[50];
    char proveedor[50];
    int estado;

} eProducto;

#endif // PRODUCTO_H_INCLUDED

eProducto pedirProducto();
void mostrarProducto(eProducto );
void cargarArray( int, eProducto[]);
void mostrarArray( int ,eProducto []);
void construirArray( int ,eProducto []);
int insertProducto(eProducto,eProducto[]);
int dameLugarLibre(eProducto[]);
int existeProducto(eProducto,eProducto[]);
int borrarProducto(eProducto,eProducto[]);
int editarProducto(eProducto,eProducto[]);



