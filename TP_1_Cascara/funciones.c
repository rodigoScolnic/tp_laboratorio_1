#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float suma(float nx, float ny) /**< desarrollo de la funcion "suma" */
{
    float suma;
    suma = nx + ny;
    return suma;
}

float resta(float nx, float ny) /**< desarrollo de la funcion resta */
{
    float res;
    res = nx - ny;
    return res;
}

float divicion(float nx, float ny) /**< desarrollo de la funcion divicion */
{
    float div;

    if(ny == 0)
    {
        printf("MathError");
        return 0;
    }

    div = nx / ny;
    return div;
}

float multiplicacion(float nx, float ny) /**< desarrollo de a funcion multiplicacion */
{
    float mult;
    mult = nx * ny;
    return mult;
}

float factorial(float nx) /**< desarrollo de la funcion factorial */
{
    float valor;

    if(nx == 0)
    {
        return 1;
    }
    else
    {
        valor = nx * factorial(nx-1);
        return valor;
    }
}


