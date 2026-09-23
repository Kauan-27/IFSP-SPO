#include <stdio.h>

int main() {
    int caixas;
    float preco_unitario, total_sem_desconto, percentual_desconto, valor_desconto, valor_final;

    do {
        printf("Digite a quantidade de caixas (ou 99999 para sair): ");
        scanf("%d", &caixas);

        if (caixas == 99999) {
            break;
        }

        printf("Digite o preco unitario da caixa: ");
        scanf("%f", &preco_unitario);

        if (caixas <= 50) {
            percentual_desconto = 0.0;
        } else if (caixas <= 150) {
            percentual_desconto = 5.0;
        } else if (caixas <= 300) {
            percentual_desconto = 10.0;
        } else if (caixas <= 500) {
            percentual_desconto = 15.0;
        } else {
            percentual_desconto = 20.0;
        }

        total_sem_desconto = caixas * preco_unitario;
        valor_desconto = total_sem_desconto * (percentual_desconto / 100.0);
        valor_final = total_sem_desconto - valor_desconto;

        printf("Valor total sem desconto: R$ %.2f\n", total_sem_desconto);
        printf("Percentual de desconto aplicado: %.0f%%\n", percentual_desconto);
        printf("Valor final a ser pago: R$ %.2f\n\n", valor_final);

    } while (1);

    return 0;
}