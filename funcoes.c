// função validadora de data
// 3 entradas dia | mes | ano
// saída 19 de maio de 1992

#include <stdio.h>
#include <string.h>
#include "const.h"

int validaData(int dia, int mes, int ano)   // retorna 0 se digitou errado
{
    char strMes[11];
    if (dia < 1 || dia > 31)                // se dia não for entre 1 e 31 retorna 0
    {
        printf("Voce Digitou o DIA errado!\n");
        return 0;
    }

    if (mes < 1 || mes > 12)                // se mês não for entre 1 e 12 retorna 0 
    {
        printf("Voce Digitou o MES errado!\n");
        return 0;
    }

    if (ano < 1 || ano > 2100)              // se ano não for entre 1 e 2100 retorna 0
    {
        printf("Voce Digitou o ANO errado!\n");
        return 0;
    }
    
    switch(mes)                             // transforma o mês numeral em string janeiro, fevereiro, etc...
    {
        case JAN:
        strcpy(strMes, "Janeiro");
        break;

        case FEV:
        strcpy(strMes, "Fevereiro");
        break;

        case MAR:
        strcpy(strMes, "Marco");
        break;

        case ABR:
        strcpy(strMes, "Abril");
        break;

        case MAI:
        strcpy(strMes, "Maio");
        break;

        case JUN:
        strcpy(strMes, "Junho");
        break;

        case JUL:
        strcpy(strMes, "Julho");
        break;

        case AGO:
        strcpy(strMes, "Agosto");
        break;

        case SET:
        strcpy(strMes, "Setembro");
        break;

        case OUT:
        strcpy(strMes, "Outubro");
        break;

        case NOV:
        strcpy(strMes, "Novembro");
        break;

        case DEZ:
        strcpy(strMes, "Dezembro");
        break;
    }

    printf("\n%d de %s de %d.\n", dia, strMes, ano);
    return 1;
}