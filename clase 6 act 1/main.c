#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lista[6]={1,8,3,4,1,2};
    int i;
    int flaggSwap;
    int aux;
    do
    {
        flaggSwap = 0;
        for(i=0;i<6;i++)
        {
            if(lista[i] < lista[i+1])
            {
                aux = lista[i];
                lista[i] = lista[i+1];
                lista[i+1] = aux;
                flaggSwap = 1;
            }
        }
    }while(flaggSwap==1);
    for(i=0;i<6;i++)
    {
        printf("%d",lista[i]);
    }

    return 0;
}
