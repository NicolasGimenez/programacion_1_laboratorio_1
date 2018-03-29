#include <stdio.h>
#include <stdlib.h>

int sumaEnteros (int numeroUno, int numeroDos);
int restaEnteros (int numeroUno, int numeroDos);
int multiplicacionEnteros (int numeroUno, int numeroDos);
float divisionEnteros (int numeroUno, int numeroDos,float *division);

int main()
{
    int numeroUno;
    int numeroDos;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    char respuesta='s';
    int opcion;


    while(respuesta=='s')
    {
        printf("Ingrese un numero : ");
        scanf("%d",&numeroUno);

        printf("Ingrese un numero : ");
        scanf("%d",&numeroDos);

        printf("1 sumar \n");
        printf("2 restar \n");
        printf("3 multiplicar \n");
        printf("4 dividir \n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
                 suma= sumaEnteros (numeroUno,numeroDos);
                 printf("la suma de los numeros es : %d",suma);
                 break;
        case 2:
                resta= restaEnteros(numeroUno,numeroDos);
                printf("la resta de los numeros es : %d",resta);
                break;
        case 3:
                multiplicacion= multiplicacionEnteros(numeroUno,numeroDos);
                printf("la multiplicacion de los numeros es : %d",multiplicacion);
                break;
        case 4:
                if(divisionEnteros(numeroUno,numeroDos,&division)==0)
                {
                    printf("la division de los numeros es : %.2f ",division);
                    break;
                }else
                {
                    printf("error no se puede dividir por cero");
                }

        }
        printf("\n continuar?? (s/n) ");
        fflush(stdin);
        scanf("%c",&respuesta);
    }

    return 0;
}
    // nombre claro dentro declaro las variables
    int sumaEnteros (int numeroUno, int numeroDos)
    {
        int suma;
        suma = numeroUno + numeroDos;
        return suma;
    }
    int restaEnteros (int numeroUno, int numeroDos)
    {
        int resta;
        resta= numeroUno - numeroDos;
        return resta;
    }
    int multiplicacionEnteros (int numeroUno, int numeroDos)
    {
        int multiplicacion;
        multiplicacion= numeroUno * numeroDos;
        return multiplicacion;
    }
    float divisionEnteros (int numeroUno, int numeroDos ,float *division)
    {
        int retorno = -1;

        if(numeroDos!=0)
        {
            *division= (float)numeroUno / numeroDos;
            retorno = 0;
        }
        return retorno;

    }
  /*  int sumaEnteros (int numeroUno, int numeroDos, float* suma)
    {
        long sumaCalculo;
        int retorno = -1;
        sumaCalculo = numeroUno + numeroDos;
        if(sumaCalculo < 32767)
        {
            *suma = sumaCalculo;
            retorno = 0;
        }
        return retorno;
    }*/

