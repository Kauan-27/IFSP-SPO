//dados de altura e sexo (0=masc, 1=fem) das pessoas. Faça um programa em Linguagem C usando o laço for(), que leia 50 dados diferentes e no final informe: a maior e a menor altura encontradas; a média de altura das mulheres; a média de altura da população; o percentual de homens na população. O programa deve solicitar ao usuário se ele deseja repetir o processamento.

#include <stdio.h>
#include <stdlib.h>

int main() {

    float altura, maiorAltura = 0, menorAltura = 0, somaAlturaM = 0, somaAlturaT = 0;
    int sexo, qtdM = 0, qtdH = 0, i, conf = 0;


//o valor de "i" é 5 para fins de teste, para não precisar digitar 50 vezes os dados
//o valor de "i" pode ser alterado para 50, no laço for(), para atender ao enunciado da questão
//assim como, o valor de "5" no cálculo da média da população, pode ser alterado para 50, para atender ao enunciado da questão

do{
    system("cls");

    printf("\nCONTAGEM DE ALTURA E SEXO\n");
    printf("---------------------------------------------------\n");
    
    for (i = 1; i <= 5; i++) {
        printf("\nDigite a altura da pessoa %d/5 em cm:             ", i);
        scanf("%f", &altura);
        printf("Digite o sexo da pessoa %d/5 (0 - masc, 1 - fem): ", i);
        scanf("%i", &sexo);

        if (i == 1) {
            menorAltura = altura;
        }

        if (altura > maiorAltura) {
            maiorAltura = altura;
        }
        if (altura < menorAltura) {
            menorAltura = altura;
        }

        if (sexo == 1) {
            somaAlturaM += altura;
            qtdM++;
        } else if (sexo == 0) {
            qtdH++;
        }

        somaAlturaT += altura;
    }

    system("cls");
    printf("\nRESULTADOS:\n");
    printf("---------------------------------------------------\n");
    printf("Maior altura:                      %3.0fcm\n", maiorAltura);
    printf("Menor altura:                      %3.0fcm\n", menorAltura);
    printf("Media de altura das mulheres:      %3.0fcm\n", (qtdM > 0) ? (somaAlturaM / qtdM) : 0);
    printf("Media de altura da populacao:      %3.0fcm\n", somaAlturaT / 5);
    printf("Percentual de homens na populacao: %3.2f%%\n", ((float)qtdH / 5) * 100);
    printf("---------------------------------------------------\n");

    printf("\nDeseja repetir o processamento? (1 - Sim, 0 - Nao): ");
    scanf("%i", &conf);

    }while (conf == 1);

    return 0;
}