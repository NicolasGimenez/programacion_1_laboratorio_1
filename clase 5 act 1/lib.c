#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
///caso que sea int///
int getInt (int* resultado,
            char* mensaje,
            char* mensajeError,
            int minimo,
            int maximo,
            int reintentos)

{
    int retorno = -1;
    long auxiliarLong;

    do
    {
        reintentos--;
        printf("%s",mensaje);
        scanf("%ld",&auxiliarLong);
        if(auxiliarLong >= minimo && auxiliarLong <= maximo)
        {
            *resultado = (int)auxiliarLong;
            retorno = 0;
            break;
        }
        printf("%s\n",mensajeError);

    }while(reintentos >= 0);
    return retorno;
}
