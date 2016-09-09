#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float x=0;
    float y=0;
    float result;

    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando A = %f\n", x);
        printf("2- Ingresar 2do operando: B = %f\n", y);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("\ningrese primer numero: ");
                scanf("%f", &x);
                break;
            case 2:
                printf("\ningrese segundo numero: ");
                scanf("%f", &y);
                break;
            case 3:
                result = suma(x,y);
                printf("\nla suma es: %f\n", result);
                break;
            case 4:
                result = resta(x,y);
                printf("\nla resta es: %f\n", result);
                break;
            case 5:
                result = divicion(x,y);
                printf("\nla divicion es: %f\n", result);
                break;
            case 6:
                result = multiplicacion(x,y);
                printf("\nla multiplicacion es: %f\n", result);
                break;
            case 7:
                result = factorial(x);
                printf("\nel factorial de %f es: %f\n", x, result);
                break;
            case 8:
                result = suma(x,y);
                printf("\nla suma es: %f\n", result);
                result = resta(x,y);
                printf("\nla resta es: %f\n", result);
                result = divicion(x,y);
                printf("\nla divicion es: %f\n", result);
                result = multiplicacion(x,y);
                printf("\nla multiplicacion es: %f\n", result);
                result = factorial(x);
                printf("\nel factorial de %f es: %f\n", x, result);
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
