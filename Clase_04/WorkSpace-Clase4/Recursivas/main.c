#include <stdio.h>
#include <stdlib.h>

/*factorizacion*/
/*EJ:factorial de 5!=5*4*3*2*1=120*/
/**\brief calcula el factorial de un numero
*
*  \param Un numero
*  \return
*
*/

int factorial(int);

int main()
{
   int numero= 0;
   int factor;

   factor = factorial(numero);

   printf("El factorial es:%d", factor)



   return 0;
}



int factorial(int numero)
{

    int respuesta;

    if(numero == 0)
    {
        respuesta = 1;
    }
    else
    {
        respuesta = numero * factorial(numero-1);
    }

    return respuesta;
}




/* stack overflow...desbordamiento de memoria*/

/* int numero = 5;
    int i;
    int factorial = 1/*factor uno es neutro*/

    /*printf("%d", factorial);

    /*empieza en "numero" con el for*/
    /*for(i = numero; i>=1; i--)
    /*for(i=1; i<=5; i++) este es otro metodo*/
    /*{
        factorial = factorial*i;
    }

    printf("El factorial es: %d", factorial);*/
