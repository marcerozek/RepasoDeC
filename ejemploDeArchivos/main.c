#include <stdio.h>
#include <stdlib.h>


#define ARCHIVO	".\\alumnos.csv"
#define ESC 27

typedef struct {
		char nombre[50];
		int legajo;
		int nota;
	}eAlumno;

int main()
{
    FILE  *pArchivo;
	eAlumno unAlumo;
	/*
	system("pause");
	printf("\nSe va a generar por primera vez el archivo\n");
	*/

	if ((pArchivo=fopen(ARCHIVO,"a"))==NULL)
	{
		printf("El archivo no puede ser abierto");
		exit(1);
	}else
	{

	    printf("archivo abierto");
	}

    unAlumo.legajo=1;
    unAlumo.nota=4;
    strcpy( unAlumo.nombre,"lalala");
    fflush(stdin);
    //fwrite(&unAlumo,sizeof(unAlumo),1,pArchivo);
    char texto[]="lalala;555;5";
    int largo=strlen(texto);
    fwrite(texto,sizeof(char),largo,pArchivo);
    fclose(pArchivo);

   if ((pArchivo=fopen(ARCHIVO,"r"))==NULL)
   {
        printf("El archivo no puede ser abierto");
		exit(1);
   }
   else{
    char renglon[70];
    while(!feof(pArchivo))
    {
      int cantidad=  fread(renglon,sizeof(char),70,pArchivo);
      printf("\ncantidad %d  y texto %s \n",cantidad,texto);

    }

          fclose(pArchivo);

   }










/*


	do
	{
		printf("\nIngrese el nombre: ");
		gets(unAlumo.nombre);
		printf("Ingrese la legajo: ");
		scanf("%d",&unAlumo.legajo);
		fflush(stdin);
		printf("Ingrese la nota: ");
		scanf("%d",&unAlumo.nota);
			fflush(stdin);
		fwrite(&unAlumo,sizeof(unAlumo),1,pArchivo);
		printf("\nPresione ESC para terminar");
	}while((getche())!=ESC);
*/
	fclose(pArchivo);

	return 0;


}
