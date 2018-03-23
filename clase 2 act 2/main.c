#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_NUMEROS 3//con este genero una constante
void imprimirMensaje(int n)
{
    printf("Dame el Numero %d\n",n+1);//el +1 es que me ingrese el uno despues el 2 despues etc
}
int main()
{
    int i;
    int numeroUsuario;
    int acumulador = 0;
    float resultado;
    int numeroMaximo;
    int numeroMinimo;
    for(i=0 ; i < CANTIDAD_NUMEROS ; i++)
    {
        //printf("Dame el Numero %d\n",i+1);
        imprimirMensaje(i);//esto es una funcion
        scanf("%d",&numeroUsuario);
        acumulador = acumulador + numeroUsuario;
        if(i==0)
        {
            numeroMaximo=numeroUsuario;
            numeroMinimo=numeroUsuario;
        }
        if(numeroUsuario>numeroMaximo)
        {
            numeroMaximo=numeroUsuario;
        }
        if(numeroUsuario<numeroMinimo)
        {
            numeroMinimo=numeroUsuario;
        }
    }
    //comentario de prueba
    resultado = (float)acumulador / CANTIDAD_NUMEROS;//aca uso el float para que el acumulador me lo trate como float y no como entero por que sino la divicion de dos enteros me da un entero y esta mal
    printf("\n Resultado %.2f \n",resultado);
    printf("el numero maximo es %d \n",numeroMaximo);
    printf("el numero minimo es %d \n",numeroMinimo);
    return 0;
}
