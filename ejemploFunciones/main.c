#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
/* prototipos*/

int Sumar(int numeroUno,int numeroDos);
int calcular(int numeroUno,int numeroDos,int operacion );
/* 1 suma 2 resta 3 mult 4 div 5 factorial*/
int main()
{
    Saludar();
  if(calcular(3,3,5))
  {
      printf("bien");
  }else{
      printf("mal");
  }

  if(calcular(8,0,4))
  {
      printf("bien");
  }else{
      printf("mal");
  }
    return 0;
}


int Sumar(int numeroUno,int numeroDos)
{
    numeroUno=numeroUno+numeroDos;

}
int calcular(int numeroUno,int numeroDos,int operacion )
{
    return 0;
}
