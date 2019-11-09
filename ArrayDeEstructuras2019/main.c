#include <stdio.h>
#include <stdlib.h>

#include "producto.h"
int main()
{
    eProducto unProducto;
   // unProducto= pedirProducto();
   // mostrarProducto(unProducto);
    // definir array
    eProducto listadoDeProductos[3];
    // cargar array
    //cargarArray(3,listadoDeProductos);
    construirArray(3,listadoDeProductos);
    mostrarArray(3,listadoDeProductos);

    // mostrar array

    return 0;
}
