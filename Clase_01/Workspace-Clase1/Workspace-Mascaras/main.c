#include <stdio.h>
#include <stdlib.h>

/**
*
*@param
*@return
*su nombre es: ?? ,su sueldo es: ??
*su aumento es del: ??%, su sueldo final es:??
*/
int main()
{
    char nombre;
    float sueldo;
    int porcentajeAumento;
    float sueldoFinal;

    printf("Ingrese nombre: \n");
    scanf("c%",&nombre);

    printf("Ingrese sueldo: \n");
    scanf("f%",&sueldo);

    printf("Ingrese aumento en porcentaje: \n");
    scanf("s%",&porcentajeAumento);

    sueldoFinal=sueldo*(1+(porcentajeAumento/100));

    printf("El sueldo final es: ",sueldoFinal);


    return 0;
}
