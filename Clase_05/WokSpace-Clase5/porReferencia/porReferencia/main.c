#include <stdio.h>
#include <stdlib.h>
#define cantidad
void cambiarEntero (int numero);

void cambiarVector (int listadoDeNumeros[cantidad]);/*Defino un tipo de dato*/

void cargarVectorConMenosUno(int listado[cantidad]);


int main()
{
    int edades [3];
    int edad = 22;
    cambiarEntero(edad);
    printf("\nEdad: %d",edad);
    cambiarVector(edades);
    printf("\nEdades: %d",edades[0]);
    return 0;
}
void cargarVectorConMenosUno(int listado[])
{
    int i;
    int tamanio;
    /*Sacar el tamanio del vector*/

    for(i=0;i<tamanio;i++)
    {
        listado[i]= -1;
    }
}

void cambiarEntero(int numero)

 {

     numero = 666;
 }

void cambiarVector (int listadoDeNumeros[cantidad])
{
    int cambiarVector
    listadoDeNumeros[0] = 666
}
