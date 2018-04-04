#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int sumaOperandos (int primerOperando, int segundoOperando,float * suma);
int restaOperandos (int primerOperando, int segundoOperando,int * resta);
float divisionOperandos (int primerOperando, int segundoOperando,float * division);
int multiplicacionOperandos (int primerOperando, int segundoOperando, int *multiplicacion);
int factorialOperaando (int primerOperando,int *factorial);

int main()
{
    char seguir='s';
    int opcion=0;
    int primerOperando;
    int segundoOperando;
    int contador=0;
    int banderaUno;
    int banderaDos;
    float suma;
    int resta;
    float division;
    int multiplicacion;
    int factorial;

    while(seguir=='s')
    {   if(contador==0)
        {
            primerOperando=0;
            segundoOperando=0;
            contador= contador + 1;
        }

        printf("1- Ingresar 1er operando (A=%d )\n",primerOperando);
        printf("2- Ingresar 2do operando (B=%d )\n",segundoOperando);
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
                    printf("ingrese el primer operando ");
                    scanf("%d",&primerOperando);
                    banderaUno=1;
                /**Ingresa el numero*/
                /**BanderaNUmeroUno = 1*/

                break;
            case 2:
                    printf("ingrese el segundo operando ");
                    scanf("%d",&segundoOperando);
                    banderaDos=1;
                /**Ingresa el numero 2*/
                /**BanderaNUmeroDos = 1*/
                    break;
            case 3:
                    if(banderaUno == 1 && banderaDos == 1)
                    {
                        if(sumaOperandos (primerOperando,segundoOperando,&suma)==0)
                        {
                            printf("El resultado de la suma es : %2.f \n\n",suma);
                        }else
                        {
                            printf("\n Error la suma supera el limite (32767)\n\n");

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
                            printf("El resultado de la resta es : %d \n\n",resta);
                        }else
                        {
                            printf("Error la resta supera el limite (-32767)\n\n");
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
                            printf("El resultado de la multiplicacion es : %d \n\n",multiplicacion);
                        }else
                        {
                            printf("Error la multiplicacion supera el limite (32767)\n\n");
                        }
                    }else
                    {
                        printf("Error uno de los operandos no esta cargado \n\n");
                    }

                    break;
            case 7:
                    if(factorialOperaando (primerOperando,&factorial)==0)
                        {
                            printf("El factorial de %d es %d \n\n",primerOperando,factorial);
                        }
                    break;
            case 8:
                    if(banderaUno == 1 && banderaDos == 1)
                    {
                       if(sumaOperandos (primerOperando,segundoOperando,&suma)==0 && restaOperandos (primerOperando,segundoOperando,&resta)==0 && divisionOperandos (primerOperando,segundoOperando,&division)==0 && multiplicacionOperandos (primerOperando,segundoOperando,&multiplicacion)==0 )
                       {
                           printf("El resultado de la suma es : %2.f \n\n",suma);
                           printf("El resultado de la resta es : %d \n\n",resta);
                           printf("El resultado de la division es : %.2f \n\n",division);
                           printf("El resultado de la multiplicacion es : %d \n\n",multiplicacion);

                       }
                    }

                    break;
            case 9:
                seguir = 'n';
                break;
         }
     }


    return 0;
}


int sumaOperandos (int primerOperando, int segundoOperando,float * suma)
{
    long sumaAuxiliar;
    int retorno = -1;
    sumaAuxiliar= (float)primerOperando + segundoOperando;
    if(sumaAuxiliar < 32767)
    {
        *suma = sumaAuxiliar;
        retorno=0;
    }
    return retorno;
}
int restaOperandos (int primerOperando, int segundoOperando,int * resta)
{
    long restaAuxiliar;
    int retorno = -1;
    restaAuxiliar= primerOperando - segundoOperando;
    if(restaAuxiliar > -32767)
    {
        *resta = restaAuxiliar;
        retorno = 0;
    }
    return retorno;
}
float divisionOperandos (int primerOperando, int segundoOperando,float * division)
{
    int retorno = -1;

    if(segundoOperando != 0)
    {
        *division =(float)primerOperando / segundoOperando;

        retorno = 0;
    }
    return retorno;
}
int multiplicacionOperandos (int primerOperando, int segundoOperando, int *multiplicacion)
{
    long multiplicacionAuxiliar;
    int retorno = -1;

    multiplicacionAuxiliar = primerOperando * segundoOperando;

    if(multiplicacionAuxiliar < 32767)
    {
        *multiplicacion = multiplicacionAuxiliar;
        retorno = 0;
    }
    return retorno;
}
int factorialOperaando (int primerOperando,int *factorial)
{
    long factorialAuxiliar;
    int retorno = -1;
    if(primerOperando ==1)
    {
        return 1;
        factorialAuxiliar= primerOperando * factorialOperaando (primerOperando - 1,*factorial);
        *factorial= factorialAuxiliar;
        retorno = 0;
    }
    return retorno;
}

