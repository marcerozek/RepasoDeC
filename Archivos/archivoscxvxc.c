#include <stdio.h>
#include <stdlib.h>
void alta(FILE * c);
void alta2(FILE * c, FILE * c2);
void bajaF(FILE * c2);
void bajaL(FILE * c2);
void listar(FILE * c, FILE * c2);

typedef struct
{
        int _codigo;
        char _descripcion[50];
        float _importe;
        int _cantidad;
}Producto;
typedef struct
{
        int _codigo;
        char _descripcion[50];
        float _importe;
        int _cantidad;
        int _activo;
}Producto2;

int main(int argc, char *argv[])
{
    
    FILE* misProductos;
    FILE* misOtrosProductos;
  
  	if((misProductos = fopen(".\\archivo.dat","rb+")) == NULL)
		if((misProductos = fopen(".\\archivo.dat","wb+")) == NULL)
		{
			printf("\nError, no se puede abrir el archivo archivo.dat...");
			exit(1);
		}
  	listar(misProductos, misOtrosProductos);
    alta(misProductos);
  	alta2(misProductos, misOtrosProductos);
  
    system("PAUSE");	
    return 0;
}

void alta(FILE * c)
{
	Producto auxc;

	rewind(c);

	printf("\nCodigo: ");
	fflush(stdin);
    scanf("%d", &auxc._codigo);

	printf("\nDescripcion: ");
	fflush(stdin);
	gets(auxc._descripcion);

	printf("\nImporte: ");
	fflush(stdin);
    scanf("%d", &auxc._importe);
	printf("\nCantidad: ");
	fflush(stdin);
    scanf("%d", &auxc._cantidad);

    fflush(stdin);
	
    fseek(c, 0L, SEEK_END);
	fwrite(&auxc, sizeof(auxc), 1, c);
}

///alta estructura 2

void alta2(FILE * c, FILE * c2)
{
    int cant; 
	Producto auxc;
	Producto2 auxc2;

	rewind(c);
 
    while(!feof(c))
    {
     cant=fread(&auxc,sizeof(auxc),1,c);
     if(cant<1)
     	if(feof(c))
	               break;
        else
	    {
	        printf("\nError, no se puede leer el archivo...");
            break;
        }
	
	 strcpy(auxc2._descripcion,auxc._descripcion);
     auxc2._codigo = auxc._codigo;
     auxc2._importe = auxc._importe;
     auxc2._cantidad = auxc._cantidad;	
     auxc2._activo = 1;
    
    //rewind(c2);
    fflush(stdin);
    fseek(c2, 0L, SEEK_END);
	fwrite(&auxc2, sizeof(auxc2), 1, c2);
   }//while
}
void bajaL(FILE * c2){
   int cant, iCodAux; 
   Producto2 auxc2;

   printf("Ingrese codigo a buscar: ");
   fflush(stdin);
   scanf("%d", &iCodAux);
	
   rewind(c2);
 
   while(!feof(c2)){
      cant=fread(&auxc2,sizeof(auxc2),1,c2);
  
      if(cant<1)
	     if(feof(c2))
	        break;
	     else{
            printf("\nError, no se puede leer el archivo2...");
            break;
         }
    
      if(iCodAux == auxc2._codigo){
        
         auxc2._activo = 0;
       
         fflush(stdin);
         fseek(c2,(long)(-1)*sizeof(auxc2), SEEK_CUR);
         fwrite(&auxc2, sizeof(auxc2), 1, c2);
         break;
      } 	
   }
}

void bajaF(FILE * c2){
   int cant, iCodAux; 
   Producto2 auxc2;
   //club2 auxc2;

   printf("Ingrese codigo a buscar: ");
   fflush(stdin);
   scanf("%d", iCodAux);
	
   rewind(c2);
 
 while(!feof(c2))
 {
  cant=fread(&auxc2,sizeof(auxc2),1,c2);
  if(cant<1)
	if(feof(c2))
	 break;
	else
	{
	 printf("\nError, no se puede leer el archivo...");
	 break;
	}
    
    if(iCodAux == auxc2._codigo){
       auxc2._activo = 0;
       fflush(stdin);
       fseek(c2, 0L, SEEK_CUR);
	   fwrite(&auxc2, sizeof(auxc2), 1, c2);
    } 	
    }
}
void listar(FILE * c, FILE * c2){
   int cant; 
   Producto auxc;
   Producto2 auxc2;
	
   system("cls");
   printf("\nListado de datos de archivo");
   printf("\nCodigo\tDescripcion\tImporte\tCantidad");
   	
   rewind(c);
 
 while(!feof(c))
 {
  cant=fread(&auxc,sizeof(auxc),1,c);
  if(cant<1)
	if(feof(c))
	 break;
	else
	{
	 printf("\nError, no se puede leer el archivo...");
	 break;
	}
    
    printf("\n%d\t%s\t%f\t%d ", auxc._codigo, auxc._descripcion,auxc._importe,auxc._cantidad);
    } 
    
    //system("cls");
   printf("\n\nListado de datos de archivo2");
   printf("\nCodigo\tDescripcion\tImporte\tCantidad\tActivo");
   	
   rewind(c2);
 
 while(!feof(c2))
 {
  cant=fread(&auxc2,sizeof(auxc2),1,c2);
  if(cant<1)
	if(feof(c2))
	 break;
	else
	{
	 printf("\nError, no se puede leer el archivo2...");
	 break;
	}
    
    printf("\n%d\t%s\t%f\t%d\t%d ", auxc2._codigo, auxc2._descripcion,auxc2._importe,auxc2._cantidad, auxc2._activo);
    }    
}     
