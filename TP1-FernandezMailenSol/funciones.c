#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


void Funcionmenu(float x, float y, int flag1, int flag2)
{
    system ("cls");
    printf("\t---------Menu de opciones---------\n\n");
    if (flag1 == 0)
    {
        printf("\t1- Ingresar 1er operando (A = X)\n\n");
    }
    else
    {
        printf("\t1- Ingresar 1er operando (A = %.2f)\n\n",x);
    }
    if (flag2 == 0)
    {
        printf("\t2- Ingresar 2do operando (B = Y)\n\n");
    }
    else
    {
        printf("\t2- Ingresar 2do operando (B = %.2f)\n\n",y);
    }
        printf("\t3- Calcular todas las operaciones\n\n");
        printf("\t4- Informar resultados\n\n");
        printf("\t5- Salir\n\n");
        printf("\t ---------------------------------\n\n\n\n");

}


    float funcionSuma (float num1,float num2)
    {
        float suma;
        suma = num1 + num2;
        return suma;
    }




    float funcionResta (float num1,float num2)
    {
        float resta;
        resta = num1 - num2;
        return resta;
    }




    float funcionDivision (float num1,float num2)
    {
        float division;

        if (num2 ==0)
        {
            division = 0;
        }
        else
        {
            division = num1 / num2;
        }
        return division;
    }




    float funcionMultiplicacion (float num1,float num2)
    {
        float multiplicacion;
        multiplicacion = num1 * num2;
        return multiplicacion;
    }




    unsigned long long int funcionFactorial (float numero)
    {
        unsigned long long int factorial;
        int i;
        int num = (int)numero;

        factorial = 1;

        if (num <0)
        {
            factorial = -1;

        }
        else if(num==0)
        {
            factorial = 1;
        }
        else
        {
            for (i = 1; i <= num; i++)
            {
                factorial *= i;
            }
        }
        return factorial;
    }


