#include <stdio.h>

int main() {
    float venda, comissao_pct, valor_comissao;
    float total_vendas = 0.0;
    int qtd_funcionarios = 0;

    printf("Digite o valor das vendas do funcionario (ou -1 para encerrar): ");
    scanf("%f", &venda);

    while (venda != -1) {
        if (venda <= 500.0) {
            comissao_pct = 0.0;
        } else if (venda <= 1500.0) {
            comissao_pct = 5.0;
        } else if (venda <= 3000.0) {
            comissao_pct = 8.0;
        } else if (venda <= 5000.0) {
            comissao_pct = 12.0;
        } else {
            comissao_pct = 15.0;
        }

        valor_comissao = venda * (comissao_pct / 100.0);
        printf("Total de vendas do funcionario: R$ %.2f\n", venda);
        printf("Valor da comissao: R$ %.2f\n\n", valor_comissao);

        total_vendas += venda;
        qtd_funcionarios++;

        printf("Digite o valor das vendas do proximo funcionario (ou -1 para encerrar): ");
        scanf("%f", &venda);
    }

    if (qtd_funcionarios > 0) {
        printf("\nTotal de vendas do dia: R$ %.2f\n", total_vendas);
        printf("Valor medio das vendas: R$ %.2f\n", total_vendas / qtd_funcionarios);
    } else {
        printf("\nNenhum dado foi digitado.\n");
    }

    return 0;
}