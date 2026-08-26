#include <stdio.h>
#include <windows.h>

int main() {
    
    SetConsoleOutputCP(65001);

    float vendas, meta, percentual_atingido, taxBonus = 0.0, premio = 0.0, bonusFinal;
    int anos_servico;

    printf("\n---CÁLCULO DE BÔNUS DE VENDAS---\n");
    printf("Digite o valor total de vendas realizadas no mês: R$ - ");
    scanf("%f", &vendas);
    
    printf("Digite o valor da meta mensal de vendas estabelecida: R$ - ");
    scanf("%f", &meta);
    
    printf("Digite o número de anos de servico do funcionário na empresa: ");
    scanf("%d", &anos_servico);

    percentual_atingido = (vendas / meta) * 100.0;

    if (percentual_atingido < 80.0) {
        taxBonus = 0.0;
        premio = 0.0;
    } else if (percentual_atingido <= 99.9) {
        taxBonus = 0.05;
        premio = 0.0;
    } else {
        if (anos_servico < 3) {
            taxBonus = 0.10;
            premio = 0.0;
        } else if (anos_servico <= 5) {
            taxBonus = 0.15;
            premio = 0.0;
        } else {
            taxBonus = 0.20;
            premio = 500.0;
        }
    }

    bonusFinal = (vendas * taxBonus) + premio;

    printf("\n--- RESULTADOS ---\n");
    printf("Percentual da meta atingido: %.2f%%\n", percentual_atingido);
    printf("Taxa de bônus aplicada: %.2f%%\n", taxBonus * 100.0);
    printf("Prêmio fixo: R$ %.2f\n", premio);
    printf("Valor do bônus final: R$ %.2f\n", bonusFinal);

    return 0;
}