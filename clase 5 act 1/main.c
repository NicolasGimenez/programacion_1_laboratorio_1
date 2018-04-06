#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

#define SIZE_ARRAY 5/// este me sirve para reemplazar el numero en donde yo quiera que aparezca

///int c= SIZE_ARRAY;   c=8;

int main()
{
    int vector[SIZE_ARRAY];
    int numeroIngresado;
    int i;
    int suma=0;
    float promedio;
    int maximo;

    printf("ingrese 5 numeros y le mostraremos elpromedio \n\n ");

    for(i=0 ;i< SIZE_ARRAY ; i++)
    {
        printf("\n Ingrese numero\n");
        scanf("%d",&numeroIngresado);///en numero ingresado podia ir  vector[i] y es lo mismo
        vector[i]= numeroIngresado;
        /*if(i==1)
        {
            maximo = numeroIngresado; esto es otra forma
        }*/
    }


    for(i=0 ; i< SIZE_ARRAY ;i++)
    {
        suma =suma + vector [i];///suma= suma + numeroIngresado;
    }
    promedio= (float)suma / SIZE_ARRAY;
    printf("el promedio es : %.2f\n",promedio);


    maximo = vector[0];/// pero esta es mejor
    for(i=0;i < SIZE_ARRAY ; i++)
    {
        if(vector [i] > maximo)
        {
            maximo = vector[i];
        }
    }
    printf("El maximo es : %d \n",maximo);



    return 0;

}

