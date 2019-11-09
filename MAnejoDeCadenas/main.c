#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarVector(int datos[],int tamanio);
void mostrarPalabras(char datos[][10],int tamanio);
void cargarVector(int datos[],int tamanio);
void ordenarVector(int datos[],int tamanio);
int main()
{
    char usuario[][10]={"jose","maria","jesus","melchor","gaspar"} ;
    int nota[10]={8,5,2,10,3};
    int i;
    int j;
    mostrarPalabras(usuario,5);
    mostrarVector(nota,5);
    cargarVector(nota,5);
    mostrarVector(nota,5);

    /*
    for(i=0;i<5;i++)
    {
        printf("alumno :%s nota :%d\n",usuario[i],nota[i]);
    }
    */
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
              if(strcmp(usuario[i],usuario[j])==-1)
            {
                int aux =nota[i];
                nota[i]=nota[j];
                nota[j]=aux;

                char auxString[10];
                strcpy(auxString,usuario[i]);
                strcpy( usuario[i],usuario[j]);
                strcpy( usuario[j],auxString);
            }
            /*
            printf("%d => %d   \n",nota[i],nota[j]);
            // mal if(usuario[i]<usuario[j])
            int resultado;
            resultado=strcmp("hola","hola");// 0
            printf("\n iguales :%d",resultado);
            resultado=strcmp("Hola","hola");//-1
            printf("\n primera :%d",resultado);
            resultado=strcmp("hola","Hola");//1
            printf("\n segunda :%d",resultado);
            resultado=strcmp("A","a");//-1
            printf("\n la A :%d",resultado);
            resultado=strcmp("a","b");//
            printf("\n la a-b  :%d",resultado);
            resultado=strcmp("b","a");//
            printf("\n la b-a :%d",resultado);


            resultado=strcmp(usuario[i],usuario[j]);

             */


        }
    }

    // ordenamiento por nota
    /*
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d => %d   \n",nota[i],nota[j]);
            if(nota[i]>nota[j])
            {
                int aux =nota[i];
                nota[i]=nota[j];
                nota[j]=aux;

                char auxString[10];
                strcpy(auxString,usuario[i]);
                strcpy( usuario[i],usuario[j]);
                strcpy( usuario[j],auxString);


            }
        }
    }
    */

    for(i=0;i<5;i++)
    {
        printf("\nalumno :%s nota :%d",usuario[i],nota[i]);
    }

    /*
    //inicializacion de arrays en paralelo
     for(i=0;i<5;i++)
    {
         //usuario[i][0]=" ";
        strcpy(usuario[i]," " );
        nota[i]=0;
    }
    */

    // carga secuencial de arrays en paralelo
    for(i=0;i<5;i++)
    {

        printf("ingrese usuario #%d :",i+1);
        //scanf("%s",usuario[i]);
        gets(usuario[i]);
        printf("ingrese nota #%d:",i+1);
        scanf("%d",&nota[i]);
    }



   // strcpy(usuario[0],"hola" );
  /*  printf("test  %s  \n",usuario[0]);
    printf("test  %s  \n",usuario[1]);*/

/*
    printf("ingrese usuario :");
    scanf("%s",usuario[0]);
    printf("ingrese usuario :");
    scanf("%s",usuario[1]);
    int tamanio= strlen(usuario[8]);
    printf("tamaño :%d  \n",tamanio);

*/

    return 0;
}
void mostrarVector(int datos[],int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        printf("nota :%d \n",datos[i]);
    }
}
void cargarVector(int datos[],int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        datos[i]=-1;
    }
}
void mostrarPalabras(char datos[][10],int tamanio){
    int i;
    for(i=0;i<tamanio;i++)
    {
        printf("nombre :%s \n",datos[i]);
    }
}







