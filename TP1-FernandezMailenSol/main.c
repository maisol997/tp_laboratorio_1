#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{

    float numeroA;
    float numeroB;
    int opcion;
    char respuesta;
    int ingreso1;
    int ingreso2;
    int ingreso3;
    float suma;
    float resta;
    float division;
    float multiplicacion;
    unsigned long long int factorialA;
    unsigned long long int factorialB;


    ingreso1=0;
    ingreso2=0;
    ingreso3=0;
    respuesta = 's';


    while (respuesta == 's')
    {
        Funcionmenu(numeroA, numeroB, ingreso1, ingreso2);
        do
        {
            printf("\tIndique una opcion: ");
            scanf("%d", &opcion);
        }
        while (opcion <1 || opcion >5);


        switch (opcion)
        {
        case 1:
            printf("\n\n\tIngrese 1er operando: ");
            fflush(stdin);
            scanf("%f", &numeroA);
            ingreso1=1;
            break;

        case 2:
            printf("\n\n\tIngrese 2do operando: ");
            fflush(stdin);
            scanf("%f", &numeroB);
            ingreso2=1;

            break;

        case 3:
            if (ingreso1 == 1 && ingreso2 == 1)
            {
                suma = funcionSuma(numeroA, numeroB);
                resta = funcionResta(numeroA, numeroB);
                division = funcionDivision(numeroA, numeroB);
                multiplicacion = funcionMultiplicacion(numeroA, numeroB);
                factorialA = funcionFactorial(numeroA);
                factorialB = funcionFactorial(numeroB);
                printf("\n\n\t. . . Resultados listos\n\n\n");
                ingreso3 = 1;
                system("pause");


            }
            else if (ingreso1 == 0)
            {
                printf("\n\tNo se ha podido calcular. \n\tIndique la opcion 1\n\n\n\n\n");
                system ("pause");
            } else if (ingreso2 == 0)
            {
                printf("\n\tNo se ha podido calcular. \n\tIndique la opcion 2\n\n\n\n\n");
                system ("pause");
            }

            break;

        case 4:
            if (ingreso3 == 1)
            {
                printf("\n\n\tEl resultado de %.2f + %.3f = %.3f\n", numeroA, numeroB, suma);
                printf("\n\n\tEl resultado de %.2f - %.3f = %.3f\n", numeroA, numeroB, resta);
                if (division == 0)
                {
                    printf("\n\n\tNo es posible dividir por 0\n");
                }
                else
                {
                    printf("\n\n\tEl resultado de %.2f / %.3f = %.3f\n", numeroA, numeroB, division);
                }
                    printf("\n\n\tEl resultado de %.2f * %.3f = %.3f\n", numeroA, numeroB, multiplicacion);

                if (factorialA == -1)
                {
                    printf("\n\n\tNo pertenece a los numeros enteros positivos\n");
                }
                else
                {
                    printf("\n\n\tEl resultado de !%.2f = %li\n", numeroA, factorialA);
                }

                if (factorialB == -1)
                {
                    printf("\n\n\tNo pertenece a los numeros enteros positivos\n\n\n\n\n");
                }
                else
                {
                    printf("\n\n\tEl resultado de !%.2f = %li\n\n\n\n\n", numeroB, factorialB);
                }
                system ("pause");
                ingreso1=0;
                ingreso2=0;
                ingreso3=0;
            }
            else
            {
                printf("\n\tNo se puede mostrar los resultados. \n\tPrimero debe calcularse con la opcion 3.\n\n\n\n\n");
                system ("pause");
            }
            break;

        case 5:
            respuesta ='n';
            break;
        }

    }

    return 0;
}


