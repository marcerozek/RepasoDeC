int Calculadora(int primerNumero,int segundoNumero,int operacion )
{
    int sePudo=1;
    int respuesta;
    switch(operacion)
    {
        case 1 :
           respuesta= Sumar(primerNumero, segundoNumero);
        break;
        case 2:
           respuesta= Restar(primerNumero, segundoNumero);
        break;
        case 3:
            if(EsCero(segundoNumero)==0)
            {
                respuesta= Multiplicar(primerNumero, segundoNumero);
            }
            else
            {
                sePudo=0;
            }
             break;
        case 4:
           respuesta= Dividir(primerNumero, segundoNumero);
        break;
    }

    MostrarResultado(respuesta);
    return sePudo;

}
int EsCero(int valor)
{
    if(valor==0)
    {
        return 1;
    }
    return 0;
}


int Sumar(int primerNumero,int segundoNumero){
    return primerNumero+segundoNumero;
}
int Restar(int primerNumero,int segundoNumero){
    return primerNumero-segundoNumero;
}
int Dividir(int primerNumero,int segundoNumero){
    return primerNumero/segundoNumero;
}
int Multiplicar(int primerNumero,int segundoNumero){
    return primerNumero*segundoNumero;
}


void MostrarResultado(int resultado){
    printf("el resultado es:%d",resultado);
}


int PedirNumero(char *mensaje ){
    int numero;
    printf(mensaje);
    scanf("%d",&numero);
    return numero;
}
void HacerCalculo(){

    int num1;
    int num2;
    int operacion;

    num1=PedirNumero("primer numero");
    num2=PedirNumero("segundo numero");
    operacion=PedirNumero("operacion");

    if( Calculadora(num1,num2,operacion)==0)
    {
        printf("error , no se pudo hacer");
    }


}




