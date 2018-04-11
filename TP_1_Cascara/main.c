#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "funciones.h"
float sumaOperandos (float primerOperando, float segundoOperando,float * suma);
float restaOperandos (float primerOperando, float segundoOperando,float * resta);
float divisionOperandos (float primerOperando, float segundoOperando,float * division);
float multiplicacionOperandos (float primerOperando, float segundoOperando, float *multiplicacion);
int factorialOperando (int primerOperando,int *factorial);

int main()
{
    char seguir='s';
    int opcion=0;
    float primerOperando;
    float segundoOperando;
    int contador=0;
    int banderaUno;
    int banderaDos;
    float suma;
    float resta;
    float division;
    float multiplicacion;
    long factorial;

    while(seguir=='s')
    {   if(contador==0)
        {
            primerOperando=0;
            segundoOperando=0;
            contador= contador + 1;
        }

        printf("1- Ingresar 1er operando (A=%.2f )\n",primerOperando);
        printf("2- Ingresar 2do operando (B=%.2f )\n",segundoOperando);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                    printf("ingrese el primer operando \n ");
                    scanf("%f",&primerOperando);
                    printf("\n");
                    banderaUno=1;
                /**Ingresa el numero*/
                /**BanderaNUmeroUno = 1*/

                break;
            case 2:
                    printf("ingrese el segundo operando \n ");
                    scanf("%f",&segundoOperando);
                    printf("\n");
                    banderaDos=1;
                /**Ingresa el numero 2*/
                /**BanderaNUmeroDos = 1*/
                    break;
            case 3:
                    if(banderaUno == 1 && banderaDos == 1)
                    {
                        if(sumaOperandos (primerOperando,segundoOperando,&suma)==0)
                        {
                            printf("El resultado de la suma es : %.2f \n\n",suma);
                        }else
                        {
                            printf("\n Error la suma supera el limite \n\n");

                        }
                    }else
                    {
                        printf("error uno de los operandos no esta cargado!!\n\n ");
                    }

                    break;
            case 4:
                    if(banderaUno == 1 && banderaDos == 1)
                    {
                        if(restaOperandos (primerOperando,segundoOperando,&resta)==0)
                        {
                            printf("El resultado de la resta es : %.2f \n\n",resta);
                        }else
                        {
                            printf("Error la resta supera el limite \n\n");
                        }
                    }else
                    {
                        printf("Error uno de los operandos no esta cargado \n\n");
                    }

                break;
            case 5:
                    if(banderaUno == 1 && banderaDos == 1)
                    {
                        if(divisionOperandos (primerOperando,segundoOperando,&division)==0)
                        {
                            printf("El resultado de la division es : %.2f \n\n",division);
                        }else
                        {
                            printf("Error no se puede dividir por cero!! \n\n");
                        }
                    }else
                    {
                        printf("Error uno de los operandos no esta cargado \n\n");
                    }

                    break;
            case 6:
                    if(banderaUno == 1 && banderaDos == 1)
                    {
                        if(multiplicacionOperandos (primerOperando,segundoOperando,&multiplicacion)==0)
                        {
                            printf("El resultado de la multiplicacion es : %.2f \n\n",multiplicacion);
                        }else
                        {
                            printf("Error la multiplicacion supera el limite \n\n");
                        }
                    }else
                    {
                        printf("Error uno de los operandos no esta cargado \n\n");
                    }

                    break;
            case 7:
                    if(factorialOperando (primerOperando,&factorial)==0)
                    {
                        printf("El factorial de %.2f es %ld \n\n",primerOperando,factorial);
                    }
                    break;
            case 8:
                    if(banderaUno == 1 && banderaDos == 1)
                    {
                       if(sumaOperandos (primerOperando,segundoOperando,&suma)==0 && restaOperandos (primerOperando,segundoOperando,&resta)==0 && divisionOperandos (primerOperando,segundoOperando,&division)==0 && multiplicacionOperandos (primerOperando,segundoOperando,&multiplicacion)==0 )
                       {
                           printf("El resultado de la suma es : %.2f \n\n",suma);
                           printf("El resultado de la resta es : %.2f \n\n",resta);
                           printf("El resultado de la division es : %.2f \n\n",division);
                           printf("El resultado de la multiplicacion es : %.2f \n\n",multiplicacion);
                        }

                        printf("El factorial de %.2f es %ld \n\n",primerOperando,factorial);

                    }else
                    {
                        printf("Error uno de los operandos no esta cargado \n\n");

                    }

                    break;
            case 9:
                seguir = 'n';
                break;
         }
     }


    return 0;
}


float sumaOperandos (float primerOperando, float segundoOperando,float *suma)
{
    double sumaAuxiliar;
    int retorno = -1;
    sumaAuxiliar= primerOperando + segundoOperando;
    if(sumaAuxiliar < INT_MAX)
    {
        *suma = sumaAuxiliar;
        retorno=0;
    }
    return retorno;
}
float restaOperandos (float primerOperando, float segundoOperando,float * resta)
{
    double restaAuxiliar;
    int retorno = -1;
    restaAuxiliar= primerOperando - segundoOperando;
    if(restaAuxiliar > INT_MIN && restaAuxiliar < INT_MAX)
    {
        *resta = restaAuxiliar;
        retorno = 0;
    }
    return retorno;
}
float divisionOperandos (float primerOperando, float segundoOperando,float * division)
{
    int retorno = -1;

    if(segundoOperando != 0)
    {
        *division = primerOperando / segundoOperando;

        retorno = 0;
    }
    return retorno;
}
float multiplicacionOperandos (float primerOperando, float segundoOperando, float *multiplicacion)
{
    double multiplicacionAuxiliar;
    int retorno = -1;

    multiplicacionAuxiliar = primerOperando * segundoOperando;

    if(multiplicacionAuxiliar < INT_MAX)
    {
        *multiplicacion = multiplicacionAuxiliar;
        retorno = 0;
    }
    return retorno;
}
int factorialOperando (int primerOperando,int *factorial)
{
    long factorialAuxiliar = 1;
    int retorno = -1;
    int i;

    for(i=1; i <= primerOperando; i++)
    {
        factorialAuxiliar= factorialAuxiliar * i;
        *factorial= factorialAuxiliar;
        retorno = 0;
    }
    return retorno;
}
