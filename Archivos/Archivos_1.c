#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* miArchivo;
    int numero=547;

    char palabra[50];

    miArchivo = fopen("prueba.txt","w");

    fprintf(miArchivo,"hola");

    fclose(miArchivo);

    miArchivo = fopen("prueba.txt","r");

    fgets(palabra,50,miArchivo);

    puts(palabra);


     /*FILE *archivo;
     int y, i, cont=0;

        char caracteres[6][100]={"Agustin","maria"};

        archivo = fopen("c:\prueba.txt","w");
        for( y=0;y<2;y++)
         {
            fprintf(archivo,"\n");
         	fprintf(archivo,caracteres[y]);
         }
         fclose(archivo);


         printf("****ahora lo leo");




        archivo = fopen("c:\prueba.txt","r");

        if (archivo == NULL)
                exit(1);

        printf("\nEl contenido del archivo de prueba es \n\n");

        while (feof(archivo) == 0)
        {
                fgets(caracteres[cont],100,archivo);
                printf("%s",caracteres[cont]);
                cont++;
        }
        printf("\n");
        system("PAUSE");
        fclose(archivo);
        printf("\n listado");
        for( i=0;i<6;i++)
        		printf("\n%s",caracteres[i]);
        getch();
        return 0;*/
}
