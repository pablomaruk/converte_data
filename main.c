#include <stdio.h>
#include "funcoes.h"

int main()
{
    int recebeDia=0, recebeMes=0, recebeAno=0, flagDataValidada=0;                  // Declaração de variáveis

    do 
    {
        printf("Digite um dia (entre 1 e 31): ");
        scanf("%d",&recebeDia);
        printf("Digite um mes (entre 1 e 12): ");                   // entradas de dados
        scanf("%d",&recebeMes);
        printf("Digite um ano (1 e 2100): ");
        scanf("%d",&recebeAno);
        flagDataValidada = validaData(recebeDia, recebeMes, recebeAno);                // processamento de dados
    }while(flagDataValidada == 0);
    // adicionei esse comentário
    // mais outro comentário

    return 0;
}