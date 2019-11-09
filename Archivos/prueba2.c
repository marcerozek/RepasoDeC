#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int campo1;
	char campo2;

	
	void(*mostrar)();
	
} obj;


void mostrarEstructura(obj* o)
{
	printf("%d--%c", o->campo1, o->campo2);
}

main()
{
	
	obj* objeto;

	objeto=(obj *) malloc(sizeof(obj)*5);
	
	
	for(int i=0; i<5;i++)
	{
		(objeto+i)->mostrar=mostrarEstructura;
	}
	
	for(int i=0; i<5;i++)
	{
		printf("\nIngrese campo 1:");
		scanf("%d", &(objeto+i)->campo1);
		
		printf("Ingrese campo 2:");
		(objeto+i)->campo2=getche();
	
		//(objeto+i)->mostrar=&mostrarEstructura;
	
	}
	
for( int i=0; i<5;i++)
{
	(objeto+i)->mostrar(objeto+i);
	printf("\n");
}

	
	
	
	
	
}
