#include <stdio.h>
#include <stdlib.h>
#define SIZE_ARRAY 5

///float calcularPromedio(int valores[],int repeticiones);
int calcularPromediov2(int valores[],int repeticiones,float *promedio);

int main()
{
    int vector[SIZE_ARRAY];
    int numeroIngresado;
    float promedio;
    int i;

    printf("ingrese 5 numeros y le mostraremos elpromedio \n\n ");

    for(i=0 ;i< SIZE_ARRAY ; i++)
    {
        printf("\n Ingrese numero\n");
        scanf("%d",&numeroIngresado);///en numero ingresado podia ir  vector[i] y es lo mismo
        vector[i]= numeroIngresado;
    }
    /*promedio= calcularPromedio(vector,SIZE_ARRAY);
    printf("el promedio es : %.2f\n",promedio);*/
    if(calcularPromediov2(vector,SIZE_ARRAY,&promedio)==0)
    {
        printf("el promedio es : %.2f\n",promedio);
    }
    else
    {
        printf("Error!!!");
    }

    return 0;
}
/*float calcularPromedio(int valores[],int repeticiones)/// y valores [] seria mi vector []
{
    int i;
    int suma =0;
    float promedio;

    for(i=0 ; i< repeticiones ;i++)/// la variable repeticiones seria mi SIZE_ARRAYS
    {
        suma =suma + valores [i];
    }
    promedio= (float)suma / repeticiones;/// la variable repeticiones seria mi SIZE_ARRAYS

    return promedio;
}*/

/// caso 2 por punteros y referencias

int calcularPromediov2(int valores[],int repeticiones,float *promedioAuxiliar)
{
    int i;
    int suma =0;
    int retorno;
    if (repeticiones ==0)
    {
        retorno=-1;
    }
    else
    {
        retorno = 0;
    }
    for(i=0 ; i< repeticiones ;i++)/// la variable repeticiones seria mi SIZE_ARRAYS
    {
        suma =suma + valores [i];
    }
    *promedioAuxiliar= (float)suma / repeticiones;/// la variable repeticiones seria mi SIZE_ARRAYS

    return retorno;
}
