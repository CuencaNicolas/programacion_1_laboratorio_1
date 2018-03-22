#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int max;

    printf(" Ingrese primer numero: ");
    scanf("%d",&numeroUno);

    printf(" Ingrese segundo numero: ");
    scanf("%d",&numeroDos);

    printf(" Ingrese tercer numero: ");
    scanf("%d",&numeroTres);


    if(numeroUno>numeroDos && numeroUno>numeroTres)
    {
        max=numeroUno;
    }
    else
    {
        if(numeroDos>numeroTres)
        {
            max=numeroDos;
        }
        else
        {
            max=numeroTres;
        }
    }

    printf("El numero mayor es: d% ",max);




    return 0;
}
