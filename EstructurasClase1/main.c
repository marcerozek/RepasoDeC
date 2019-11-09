#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANIO 5
typedef struct{
    int legajo;
    int nota;
    char nombre[50];
    int estaVacio;//0 para no , 1 para esta vacio
}eAlumno;

void InicializarAlumnos(eAlumno listado[],int cantidad);
void MostrarAlumnos(eAlumno listado[],int cantidad);
void CargarAlumnosTest(eAlumno listado[],int cantidad);
void MostarUnAlumno(eAlumno Alguno);

int DameElIndiceLibre(eAlumno listado[],int cantidad);




int main()
{
    eAlumno ArrayDeAlumnos[TAMANIO];
    eAlumno NuevoAlumno;

    printf("Estructuras!\n");

    InicializarAlumnos(ArrayDeAlumnos,TAMANIO);

    CargarAlumnosTest(ArrayDeAlumnos,TAMANIO);

    MostrarAlumnos(ArrayDeAlumnos,TAMANIO);

   // BuscarAlumnoPorNombre(ArrayDeAlumnos,TAMANIO,"julieta");

    return 0;
}
void CargarAlumnosTest(eAlumno listado[],int cantidad)
{
    int i;
    int legajoAux[]={555,888,444,666,111};
    int notaAux[]={10,2,9,4,6};
    char nombreAux[][50]={"juan","pedro","maria","julieta","pepe"};
    for(i=0;i<cantidad;i++){
        listado[i].estaVacio=0;
        listado[i].legajo=legajoAux[i];
        listado[i].nota=notaAux[i];
        strcpy( listado[i].nombre,nombreAux[i]);
    }


}
void MostarUnAlumno(eAlumno Alguno){

    printf("\n%d ", Alguno.legajo);
    printf("\t\t%s", Alguno.nombre);
    printf("\t\t%d", Alguno.nota);



}
void InicializarAlumnos(eAlumno listado[],int cantidad){
    int i;
    for(i=0;i<cantidad;i++){
        listado[i].estaVacio=1;
    }

}

int DameElIndiceLibre(eAlumno listado[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++){
        if(listado[i].estaVacio==1)
        {
           return i;

        }
    }
    return -1;

}
void MostrarAlumnos(eAlumno listado[],int cantidad){
    int i;
    int tieneAlumnos=0;
    printf("\nLegajo\t\tNombre\t\tNota\n ");
    for(i=0;i<cantidad;i++){
        if(listado[i].estaVacio==0)
        {
            tieneAlumnos=1;
            MostarUnAlumno(listado[i]);
        }
    }
    if(tieneAlumnos==0)
    {
        printf("No Hay alumnos para mostrar \n");
    }
}





typedef struct{
    float dni;
    char nombre[50];
    char apellido[50];
    int estaVacio;
}ePersona;

main(){
    ePersona personas[MAX];
    InicializarPersonas(personas, MAX);
    mostarMenu();
    pedirDatos(personas, MAX);
    Mostrar(personas, MAX);
}
InicializarPersonas (ePersona p[],in cant)
{   int i ;
    for(i=0;i<cant;i++)
    {
        p[i].estaVacio = 1;
    }
}
void PedirPersona (ePersona p[],int cant)
{   int i ;
    int flagEncontro = 0;
    for(i=0;i<cant;i++)
    {
        if(p[i].estaVacio==1)
        {
            PedirDatos(p,i);
            flagEncontro  = 1;
            break;
        }
    }
    if(flagEncontro ==0 )
        printf("No hay mas espacio");
}
void PedirDatos(ePersona persona[],int indice, int cantidad){
    printf("Ingrese DNI: \n");
    int auxDni;
    scanf("%d", &auxDni);
    while(validarDNI(persona,auxDni,cantidad)== 1) {
        printf("Ya existe el DNI ingrese otro: \n");
        scanf("%d", &auxDni);
    }
    persona[indice].dni = auxDni;
    printf("\nIngrese nombre: \n");
    fflush(stdin);
    getspersona[indice].nombre);
    printf("Ingrese pellido: \n");
    fflush(stdin);
    gets(persona[indice].apellido);
    persona[indice].estaVacio = 0;
}
int validarDNI(ePersona personas, int dni, int cant)
{   int i;
    int salida = 0;
    for(i=0;i<cant;i++)
    {
        if(personas[i].estaVacio==0 && ?????  )
        {
            salida = 1;
        }
    }
    return salida;
}
void mostarPersona (ePersona p[],int cant)
{   for(i=0;i<cant;i++)
    {
        if(p[i].estaVacio==0)
        {
            pf( "nombre: %s", p[i].nombre );
        }
    }
}
void OrdenarPorDNI (ePersona p[],int cant)
{   int i;
    int j;
    ePersona auxPer;
    for(i=0;i<cant -1;i++)
    {
        for(j=i+1;j<cant;i++)
        {
            if(p[i].DNI< p[j].DNI )
            {
                auxPer = p[i];
                p[i] = p[j];
                p[j] = auxPer ;
            }
    }
}











