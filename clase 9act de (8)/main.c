#include <stdio.h>
#include <stdlib.h>
#include <string.h>
///primero defino la estructura
/*typedef struct
{
    int edad;
    char nombre[50];
    char apellido[50];
}Persona;/// esto iria en un punto h*/


     /*Persona personas[50];
    int lista[50];

    strcpy (personas[0].nombre,"toto")*/

typedef struct
{
    char nombre[50];
    char descripcion[200];
    float precio;
    int flagCarga;
}Producto;
int cargarDatosProducto (Producto productos[],int indice,int cantidad);
int imprimirDatosProducto (Producto productos[],int indice,int cantidad);
int devuelveIndiceVacio (Producto productos[],int indice);
int main()
{
    int i;
    Producto productos[200];
    int indiceVacio;
    int opcion;

    printf("1-cargar producto ");
    printf("2-imprimir lista productos");
    scanf("%d",&opcion);

    switch(opcion)
    {
        case 1:
                indiceVacio = devuelveIndiceVacio (productos,200);
                if(indiceVacio != -1)
                {
                    printf("\n El indice vacio es %d \n",indiceVacio);
                }
                else
                {
                    printf("no hay lugar vacio");
                }
                if(indiceVacio)



    }

    for(i=0;i<200;i++)
    {
        productos[i].flagCarga = -1;
    }

    cargarDatosProducto (productos,1,2);
    imprimirDatosProducto (productos,1,2);
    indiceVacio = devuelveIndiceVacio (productos,2);
    if(indiceVacio != -1)
    {
        printf("\n El indice vacio es %d \n",indiceVacio);
    }
    else
    {
        printf("no hay lugar vacio");
    }


    return 0;
}
int cargarDatosProducto (Producto productos[],int indice,int cantidad)
{
    int retorno = -1;

    if(indice <= cantidad)
    {
        productos[indice].flagCarga = -1;
        printf("ingrese nombre del producto ");
        fgets(productos[indice].nombre,50,stdin);
        productos[indice].nombre[strlen(productos[indice].nombre)-1] = 0;///es para borrarle el enter y le pone un cero
        fflush(stdin);
        printf("ingrese descripcion del producto ");
        fgets(productos[indice].descripcion,50,stdin);
        productos[indice].descripcion[strlen(productos[indice].descripcion)-1] = 0;
        fflush(stdin);
        printf("ingrese precio del producto ");
        scanf("%f",&productos[indice].precio);
        fflush(stdin);
        retorno = 0;
        productos[indice].flagCarga = 0;

    }
    else
    {
        printf("Error supera la cantidad para ser cargado");
    }

    return retorno;
}
int imprimirDatosProducto (Producto productos[],int indice,int cantidad)
{

        printf("\n Los datos son :\n");
        printf("Nombre %s\n",productos[indice].nombre);
        printf("Descripcion %s\n",productos[indice].descripcion);
        printf("Precio %.2f \n",productos[indice].precio);
}
int devuelveIndiceVacio (Producto productos[], int cantidad)
{   int i;
    for(i=0;i<cantidad;i++)
    {
        if(productos[i].flagCarga == -1)
        {
            return i;
        }

    }
    return 0;
}
