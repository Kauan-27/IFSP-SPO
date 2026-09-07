//usando a estrutura do/while(), para um comerciante que deseja fazer o levantamento diário do lucro das mercadorias que ele comercializa. Para isto, quer registrar cada mercadoria com o nome, preço de compra (preço de custo) e preço de venda das mesmas, em seguida calcule o percentual de lucro em cada mercadoria
//No final exiba: Quantidade de mercadorias com lucro de até 10%; Quantidade de mercadorias com lucro acima de 10% até 30%; Quantidade de mercadorias com lucro acima de 30% até 50% Quantidade de mercadorias com lucro acima de 50%; Total de compras (custo total) em R$ Total de vendas em R$ Total de lucro em R$

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char nome[50];
    float preco_compra, preco_venda, percentual_lucro, total_compras = 0, total_vendas = 0, total_lucro = 0;
    int mercadorias_ate_10 = 0, mercadorias_10_30 = 0, mercadorias_30_50 = 0, mercadorias_acima_50 = 0;
    
    system("cls");
    
    printf("\nLEVANTAMENTO DIARIO DE LUCRO DAS MERCADORIAS\n");
    printf("-----------------------------------------------------------------------------------\n");

    do {
        printf("Digite o nome da mercadoria %2i (ou 'sair' para encerrar): ", mercadorias_ate_10 + mercadorias_10_30 + mercadorias_30_50 + mercadorias_acima_50 + 1);
        scanf(" %49[^\n]", nome);
        if (strcmp(nome, "sair") == 0 || strcmp(nome, "Sair") == 0) {
            break;
        }
        printf("Digite o preco de compra: ");
        scanf("%f", &preco_compra);
        printf("Digite o preco de venda: ");
        scanf("%f", &preco_venda);
        printf("-----------------------------------------------------------------------------------\n");

        percentual_lucro = ((preco_venda - preco_compra) / preco_compra) * 100;

        if (percentual_lucro <= 10) {
            mercadorias_ate_10++;
        } else if (percentual_lucro <= 30) {
            mercadorias_10_30++;
        } else if (percentual_lucro <= 50) {
            mercadorias_30_50++;
        } else {
            mercadorias_acima_50++;
        }

        total_compras += preco_compra;
        total_vendas += preco_venda;
        total_lucro += (preco_venda - preco_compra);

    } while (1);

    system("cls");
    printf("\nLUCRO DAS MERCADORIAS\n");
    printf("--------------------------------------------------------------\n");
    printf("Quantidade de mercadorias com lucro de ate 10%%:           %2i\n", mercadorias_ate_10);
    printf("Quantidade de mercadorias com lucro acima de 10%% ate 30%%: %2i\n", mercadorias_10_30);
    printf("Quantidade de mercadorias com lucro acima de 30%% ate 50%%: %2i\n", mercadorias_30_50);
    printf("Quantidade de mercadorias com lucro acima de 50%%:         %2i\n", mercadorias_acima_50);
    printf("--------------------------------------------------------------\n");
    printf("\nRESUMO FINANCEIRO\n");
    printf("----------------------------------------\n");
    printf("Total de compras (custo total): R$%5.2f\n", total_compras);
    printf("Total de vendas:                R$%5.2f\n", total_vendas);
    printf("Total de lucro:                 R$%5.2f\n", total_lucro);
    printf("----------------------------------------\n");

    return 0;
}