#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
/// caso que sea int///
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
///caso que sea  float///
int main()
{
    float edad;
    if(getFloat(&edad,"edad ?","supera el rango (0-199)",0,199,2)==0)
    {
        printf("la edad es: %f ",edad);
    }else
    {
        printf("error");
    }
    return 0;
}
///caso que sea char///
int main()
{
    char edad;
    if(getChar(&edad,"edad ?","supera el rango (0-199)",0,199,2)==0)
    {
        printf("la edad es: %c ",edad);
    }else
    {
        printf("error");
    }
    return 0;
}
///caso que sea string///
int main()
{
    char edad;
    if(getChar(&edad,"edad ?","supera el rango (0-199)",0,199,2)==0)
    {
        printf("la edad es: %c ",edad);
    }else
    {
        printf("error");
    }
    return 0;
