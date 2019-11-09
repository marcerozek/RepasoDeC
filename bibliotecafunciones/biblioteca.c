int cambiarValor( int valor)
{
    valor=999;
    return 1;
}
int cambiarValorReferencia( int *valor)
{
    printf("el valor es: %d",valor);
    *valor=999;

    return 1;
}





int  dividirPorReferencia(int DUno,int DDos ,float *respuesta)
{
    if(DUno!=0)
    {
        *respuesta=(float)DUno/DDos;
        return 1;
    }
    return 0;

}



int saludar()
{
    printf("hola biblioteca");
}
int dividir(int numero)
{
    int respuesta;
    int resultado ;
    respuesta=esDistintoACero(numero);
    if(respuesta==1)
    {
        resultado =numero/2;
    }
    return respuesta;
}

int esDistintoACero(int numero)
{
    if(numero!=0)
    {
        return 1;
    }
    return 0;
}

int factorial(int numero)
{
    int respuesta;
    if(numero==1)
    {
        return 1;
    }
    respuesta=numero*factorial(numero-1);
    return respuesta;


}
