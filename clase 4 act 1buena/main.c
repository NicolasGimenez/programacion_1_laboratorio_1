#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{
    int edad;
    if(getInt(&edad,"edad ?","supera el rango (0-199)",0,199,2)==0)
    {
        printf("la edad es: %d ",edad);
    }else
    {
        printf("error");
    }
    return 0;
}

