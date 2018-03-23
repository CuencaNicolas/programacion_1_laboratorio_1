#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**int n;
    char i;

    printf("Ingrese un numero: ");
    scanf("%d",&n);

    printf("Ingrese un caracter ");
    scanf("%c",&i);

    fflush(stdin);
    scanf("%c",&i);
    i=getch()

    printf("%d--%c",n,i);*/


    /** se ingresa un numero(tiene que ser distinto de cero),no se sabe cuantos,
    /** se pide mostrar:
    *cantidad de pares e impares
    *porcentaje de numeros positivos y negativos
    *maximos y minimo
    *maximo numero par
    *cantidad de numeros comprendidos entre 125 y 236*/

    /**int numero;
    int par;
    int impar;
    int porNumPositivo;
    int porNumNegativo;
    int maximo;
    int minimo;
    int maxNumPar;
    int maxNumImpar;
    int acumulador=0;
    int contador=0;
    int respuesta="y";

    while(respuesta!="n")
    {
        printf("Ingrese numero: ");
        scanf("%d",&numero);
        respuesta=printf("Ingrese y/n para continuar");

        if(numero%2==0 && numero!=0)
        {
            par++;
        }
        else
        {
            impar++;
        }


    }*/

    int numero;
    char respuesta='s';/**Se utiliza apostrofe en vez de comilla como se hace en java*/
    int contadorPares=0;
    int contadorImpares=0;
    int contadorNegativo;
    int contadorPositivo;
    int contadorNumeros;
    float porcentajePositivos;
    float porcentajeNegativos;
    int maximo;
    int minimo;
    int flag = 0;
    int flagPar=0;
    int maximoPar;



    do
    {
        printf("\nIngrese un numero: ");
        scanf("%d",&numero);

        while(numero==0)
        {
            printf("\nReingrese un numero: ");
            scanf("%d",&numero);
        }

        if(numero%2==0)
        {
            if(contadorPares == 0 || numero>maximoPar)
            {
                maximoPar = numero;
            }
            contadorPares++;
        }
        else
        {
            contadorImpares++;
        }

        if(numero>0)
        {
            contadorPositivo++;
        }
        else
        {
            contadorNegativo++;
        }

        if(flag == 0 || numero > maximo)
        {
            maximo = numero;
            /**flag = 1;*/
        }
        if(flag == 0 || numero < minimo)
        {
            minimo = numero;
            flag = 1;
        }
        /**eficacia,eficiencia*/

        /**if(flag == 0)
        {
            maximo = numero;
            minimo = numero;
            flag = 1;
        }
        else
        {
            if(numero < minimo)
            {
                minimo = numero;
            }
            if(numero > maximo)
            {
                maximo = numero;
            }*/
        }


        printf("Desea continuar? ");
        respuesta=getche();
    }
    while(respuesta!='n');

    contadorNumeros= contadorPositivo+contadorNegativo;

    porcentajePositivos= ((float)contadorPositivo * 100) / contadorNumeros;
    /**porcentajeNegativos= ((float)contadorNegativo * 100) / contadorNumeros;*/
    porcentajeNegativos= 100 - porcentajePositivos;
    /**proceso CASTEO(como el parseInt) */

    printf("\nCantidad de pares: %d",contadorPares);
    printf("\nCantidad de impares: %d",contadorImpares);
    printf("\nPorcentaje de positivos: %% %f",porcentajePositivos);
    printf("\nPorcentaje de negativos: %% %f",porcentajeNegativos);
    printf("\nEl maximo es: %d",maximo);
    printf("\nEl minimo es: %d",minimo);

    return 0;
}
