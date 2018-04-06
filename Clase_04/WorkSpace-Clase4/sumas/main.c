#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

/*prototipo 1*/
void sumar1(void);
/*prototipo 2*/
void sumar2(int numeroUno,int numeroDos);
/*prototipo 3*/
int sumar3();
/*prototipo 4*/
int sumar4(int,int);

int main()
{
    //sumar1();

    //sumar2(4,9);

    int resultado;
    //resultado= sumar3();
    //printf("La suma es %d",suma)
    int numeroUno;
    int numeroDos;

    numeroUno = pedirEntero("Ingrese un numero ",1,1000);
    numeroDos = pedirEntero("Ingrese un numero",1,1000);

    resultado = sumar4(numeroUno,numeroDos);

    printf("El resultado es: %d",resultado);

    return 0;
}

/*prototipo 1*/

void sumar1(void)

{
    int numeroUno;
    int numeroDos;
    int suma;

    numeroUno = pedirEntero("Ingrese un numero ",1,1000);
    numeroDos = pedirEntero("Ingrese un numero",1,1000);

    suma = numeroUno + numeroDos;

    printf("La suma es: %d", suma);

}

/*prototipo 2*/

void sumar2(int numeroUno,int numeroDos)
{
    int suma;

    suma = numeroUno + numeroDos;

    printf("La suma es: %d",suma);

}

/*prototipo 3*/

int sumar3()
{

    int numeroUno;
    int numeroDos;
    int suma;

    numeroUno = pedirEntero("Ingrese un numero ",1,1000);
    numeroDos = pedirEntero("Ingrese un numero",1,1000)

    suma = numeroUno + numeroDos;

    return suma;

}

/*prorotipo 4*/

int sumar4(int numeroUno,int numeroDos)

{
    int suma;

    suma = numeroUno + numeroDos;


}
