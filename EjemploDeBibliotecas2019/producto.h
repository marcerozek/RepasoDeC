#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
typedef struct
{
    int id;
    char nombre[50];
    char apellido[50];
    int edad;
    int idLocalidad;
    int estado;

} ePersona;
#endif // PRODUCTO_H_INCLUDED
ePersona construirPersona(int idLocalidad);
