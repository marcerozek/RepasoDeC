#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD_ALUMNOS 4

void CargarNumerosTest(int array[],int cantidad)
{
    int aux[]={22,33,44};
    int i;
    for(i=0;i<cantidad;i++){
       array[i]=aux[i];
    }
}
void MostrarNumerosTest(int array[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)    {
        printf(" %d",array[i]);
    }
}


void mostarPalabrasTest(char array[][50],int tamanio ){
    int i;
    for(i=0;i < tamanio; i++){
        printf("\n palabra:%s",array[i]);
    }
}




void cargarNombresTest(char array[][50],int cantidad){
    char aux[][50]= {"Alfredo","Rogelio","Julieta","Pablo"};
    int i;
    for(i=0;i<cantidad;i++){
        strcpy(array[i],aux[i]);
    }
}
void cargarApellidoTest(char array[][50],int cantidad){
    char aux[][50]= {"mercurio","agua","roberto","mccartney"};
    int i;
    for(i=0;i<cantidad;i++){
        strcpy(array[i],aux[i]);
    }
}
void CargarEdadesTest(int array[],int cantidad){
    int aux[]={22,33,18,55};
    int i;
    for(i=0;i<cantidad;i++){
       array[i]=aux[i];
    }
}

void listar(char nombres[][50],char apellido[][50],int edades[],int tamanio );

void ordenarPorEdades(char nombres[][50],char apellido[][50],int edades[],int tamanio )
{
    int i;
    int j;
    for(i=0;i< tamanio-1;i++)
    {
        for(j=i+1;j<tamanio;j++)
        {
            if()
            {
                //swap

            }
        }
    }

}



























void listar(char *nombres,char *apellido,int notas[],int edades[],int tamanio );
void mostarNombreYNotasPuntero(char nombres[][50],int notas[],int tamanio);



int esNumerico(char str[]) ;
int esAlfaNumerico(char str[]);
int esSoloLetras(char str[]);

void getString(char mensaje[],char input[]);
int getStringLetras(char mensaje[],char input[]);
int getStringNumeros(char mensaje[],char input[]);





int dameOpcion(char mensaje[],char error[],int max,int min);


int DameElMaximo(int array[],int cantidad);


/*cargar datos para testear */
void cargarNombreTest(char array[][50],int cantidad);
void cargarEdaesTest(int array[][50],int cantidad);
void mostarNombreYNotas(char nombres[][50],int notas[],int tamanio);

int main()
{
    /*
    char apellidos[CANTIDAD_ALUMNOS][50];
    int  notas[CANTIDAD_ALUMNOS] ;
    */
   // char nombres[CANTIDAD_ALUMNOS][50]= {"Alfredo","Rogelio","Julieta","Pablo"};
   // int  edades[CANTIDAD_ALUMNOS]= {54,24,37,18};
   // char apellidos[CANTIDAD_ALUMNOS][50]= {"Mercurio","Agua","Roberto","McCartney"};
    //int  notas[CANTIDAD_ALUMNOS] = {2,4,7,10};
    char nombres[CANTIDAD_ALUMNOS][50];
    int  notas[CANTIDAD_ALUMNOS] ;
    int asistencia[CANTIDAD_ALUMNOS];
    int i;
    int indiceDelMaximo;

    cargarNombreTest(nombres,CANTIDAD_ALUMNOS);
    cargarNotasTest(notas,CANTIDAD_ALUMNOS);
    cargarAsistenciaTest(asistencia,CANTIDAD_ALUMNOS);
    mostarNombreYNotas(nombres,notas,CANTIDAD_ALUMNOS);

    indiceDelMaximo=DameElIndiceDelMaximo(notas,CANTIDAD_ALUMNOS);
    nombres[indiceDelMaximo]

    printf("\n\n\nArrays en paralelo\n");
    return 0;
}

int DameElMaximo(int array[],int cantidad)
{
    int i;
    int maximo;
    for(i=0;i<cantidad;i++){
        if(i==0||array[i]>maximo)        {
            maximo=array[i];
        }
    }
    return maximo;
}

int DameElIndiceDelMaximo(int array[],int cantidad)
{
    int i;
    int indice;
    int maximo;
    maximo=DameElMaximo(array,cantidad);

    for(i=0;i<cantidad;i++){
        if(array[i]==maximo)        {
          indice= i;
        }
    }
    return indice;
}
void MostrarElNombreDelMaximo(char arrayPalabras[][50]int array[],int cantidad)
{
    int i;
    int indice;
    indice =DameElIndiceDelMaximo(array,cantidad);
    arrayPalabras[indice];

}

void cargarNombreTest(char array[][50],int cantidad){

    char aux[][50]= {"Alfredo","Rogelio","Julieta","Pablo"};
    int i;
    for(i=0;i<cantidad;i++)
    {
        strcpy(array[i],aux[i]);
    }
}

void cargarNotasTest(int array[],int cantidad){

    int aux[]= {4,10,8,2};
    int i;
    for(i=0;i<cantidad;i++)
    {
        array[i]=aux[i];
    }
}

void cargarAsistenciaTest(int array[],int cantidad){

    int aux[]= {1,0,1,1};
    int i;
    for(i=0;i<cantidad;i++)
    {
        array[i]=aux[i];
    }
}

void mostarNombreYNotas(char array[][50],int notas[],int tamanio )
{
    int i;
      for(i=0;i < tamanio; i++)
    {
            printf("\n nombre:%s   \tNota:%d ",array[i],notas[i]);
    }
}

void mostarNombreYNotasPuntero(char*nombres,int notas[],int tamanio )
{
    int i;
    for(i=0;i < tamanio; i++)
    {
            printf("\n nombre:%s   \tNota:%d ",&nombres[i],notas[i]);
    }
}

void getString(char mensaje[],char input[])
{
    printf(mensaje);
    scanf ("%s", input);
}

int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if( (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
       {
            return 0;
       }
       i++;
   }
   return 1;
}

int getStringLetras(char mensaje[],char input[])
{
    char aux[50];
    int es;
    getString(mensaje,aux);
    es=esSoloLetras(aux);
    if(es)
    {
        strcpy(input,aux);

    }
    return es;
}

void listar(char*nombres,char *apellidos,int notas[],int edades[],int tamanio )
{
    int i;
      for(i=0;i < tamanio; i++)
    {
            printf("\n nombre:%s \tapellido:%s  \tNota:%d \tedad:%d",nombres[i],&apellidos[i],notas[i],edades[i]);
    }
}
