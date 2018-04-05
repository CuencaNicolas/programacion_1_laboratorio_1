#include <stdio.h>
#include <stdlib.h>
 /**
    1-los que todos los lenguajes comparten al definir,metodo,funcion,
    un pedazo de codigo que esta destinado a algo y devuelva otra cosa(prototipo o firma unica)
    compuesta el tipo de dato que retorna,la funcion algo parecido a la variable,
    ponemos funcion saludar,poner la firma de mi funcion
    **VOID saludar (void);firma de la funcion saludar,nos dice como interactuar.
    2-saludar();
    3-Definir la funcionalidad,lo que esta arriba lo copio y lo pego abajo del main,
    lo punto y coma se lo saco,doy enter, abro y cierro llave
    **VOID saludar (void)
    {

    }
    */

void saludar (void);
int sumar(int numeroUno,int numeroDos);
float dividirEnteros (int numeroUno,int numeroDos);
int getEntero (shar* mensaje,int maximo, int minimo);

int main()
{
    /**saludar();

    void saludar(void)
    {
         printf("hola mundo \n");
    }
    return 0;
}
int sumar(int numeroUno,int numeroDos)
{
    int numero;
    numero = sumar(3,3);
    printf();
    return 0;
}
int sumar(int numeroUno,int numeroDos);
{
    int resultado = 0;

    resultado = numeroUno + numeroDos;

    return resultado;
}*/

/**{
    float numero;

    numero = dividirEnteros(10,3);

    return 0;

}
float dividirEnteros(int numeroUno,int numeroDos)
    {
        float resultado = 0;

        resultado = (float) numeroUno / numeroDos;

        return resultado;


    }


}
*/
    /**int sePudo;
    sepudo = pedirNumeroPar();

    if(sepudo %2 == 0)
    {
        printf("ok");

    }
    else
    {
        printf("mal");

    }

    return 0;*/
    int numero;
    numero=getEntero("Ingrese su edad","Error, debe ser enter 1 y 199",199,1);
    printf("El entero ingresado es : %d",numero);

    int getEntero(char*mensaje,int maximo, int minimo);
    {
        int retorno= -1;
        do
        {
            printf("%s",mensaje);
            scanf("%d",entero);
            if(retorno<maximo && retorno>minimo)
            {
                break;
            }
            printf("%s"mensajeError);
        }
        while(entero<minimo|| entero>maximo)

        return retorno;
    }


}
