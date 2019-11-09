#include<stdio.h>
#include<stdlib.h>

void funcion()
{
	printf("Hola!!!!");
}

void funcion2(int x)
{
	printf("el numero es %d", x);
}

int funcion3(int x)
{
	return x*5;
}

main()
{
	void (*mifuncion)();
	void (*mifuncion2)(int);
	int  (*mifuncion3)(int);
	
	mifuncion=funcion;
	mifuncion2=funcion2;
	mifuncion3=funcion3;
	
	mifuncion();
	
	mifuncion2(4);
	
	int multi=mifuncion3(9);
	printf("el valor multiplicado es: %d", multi);
}
