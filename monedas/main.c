#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dinero;
    char tipo;
    float promedioPositivos;//302.500000
    int contador;
    int maximoImporteEnDolares;
    int esElPrimerDolar;


    contador=0;
    esElPrimerDolar=1;

    while(contador<4)
    {
        contador++;
        printf("ungrese dinero:");
        scanf("%d",&dinero);
        printf("ungrese tipo:");
        fflush(stdin);
        scanf("%c",&tipo);

        if(tipo=='d')
        {
            if(esElPrimerDolar==1)
            {
                maximoImporteEnDolares=dinero;
                esElPrimerDolar=0;
            }else{
                if(dinero>maximoImporteEnDolares)
                {
                   maximoImporteEnDolares=dinero;
                }
            }
        }
    }
    if(esElPrimerDolar==1)
    {
        printf("no ingreso dolares ");
    }else{
        printf("el importe maximo en dolares es: %d",maximoImporteEnDolares);
    }




    return 0;
}
