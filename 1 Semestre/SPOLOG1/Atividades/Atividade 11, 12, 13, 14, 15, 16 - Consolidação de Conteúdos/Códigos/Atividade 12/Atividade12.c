//O valor a ser pago é obtido com base nas seguintes regras de cálculo: - Taxa fixa de R$ 2,00 pela ligação e taxa de R$1,00 para os 3 primeiros minutos; - Acima dos três primeiros minutos as regras são de R$1,50 para cada intervalo de 5 minutos e R$ 0,25 para cada minuto abaixo disto.

#include <stdio.h>
int main() {

    float valor, minutos;

    printf("\nCALCULADORA TELEFONICA\n");
    printf("------------------------------\n");
    printf("Digite a duracao da ligacao em minutos: ");
    scanf("%f", &minutos);

    if (minutos <= 3) {
        valor = 2.00 + (1.00 * minutos);
    } else {
        float minutos_excedentes = minutos - 3;
        int intervalos_de_5 = (int)(minutos_excedentes / 5);
        float minutos_restantes = minutos_excedentes - (intervalos_de_5 * 5);
        valor = 2.00 + (1.00 * 3) + (1.50 * intervalos_de_5) + (0.25 * minutos_restantes);
    }

    printf("------------------------------\n");
    printf("Valor a ser pago: R$ %.2f\n", valor);
    printf("------------------------------\n");

    return 0;
}