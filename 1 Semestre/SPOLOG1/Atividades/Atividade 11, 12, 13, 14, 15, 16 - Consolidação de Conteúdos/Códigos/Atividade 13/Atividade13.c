//Solicitados na hora do check in é o nome do continente de origem do hospede: 1-América do norte; 2-América Central; 3-América do Sul; 4-Europa; 5-Ásia; 6-África; e 7-Oceania. Usando a estrutura switch/case, desenvolva um programa que receba os dados de 20 turistas e no final mostre os totais de cada continente e o percentual de turistas da américa do sul.

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int continente;
    int america_norte = 0, america_central = 0, america_sul = 0, europa = 0, asia = 0, africa = 0, oceania = 0;

    for (int i = 1; i <= 20; i++) {
        system("cls");
        printf("\nCONTAGEM DE TURISTAS POR CONTINENTE\n");
        printf("---------------------------------------------------\n");
        printf("Digite o continente de origem do turista %d/20: \n", i);
        printf("---------------------------------------------------\n");
        printf("1 - America do Norte  | 2 - America Central\n");
        printf("3 - America do Sul    | 4 - Europa\n");
        printf("5 - Asia | 6 - Africa | 7 - Oceania\n");
        printf("---------------------------------------------------\n");
        scanf("%d", &continente);

        switch (continente) {
            case 1:
                america_norte++;break;
            case 2:
                america_central++;break;
            case 3:
                america_sul++;break;
            case 4:
                europa++;break;
            case 5:
                asia++;break;
            case 6:
                africa++;break;
            case 7:
                oceania++;break;
            default:
                i--;break;
        }
    }

    float percentual_america_sul = ((float)america_sul / 20) * 100;

    system("cls");
    printf("\nTOTAL DE TURISTAS POR CONTINENTE:\n");
    printf("---------------------------------------------------\n");
    printf("America do Norte:  %2i | America Central: %2i\n", america_norte, america_central);
    printf("America do Sul:    %2i | Europa:          %2i\n", america_sul, europa);
    printf("Asia: %2i | Africa: %2i | Oceania:         %2i\n", asia, africa, oceania);
    printf("---------------------------------------------------\n");
    printf("Percentual de turistas da America do Sul: %.2f%%\n", percentual_america_sul);
    printf("---------------------------------------------------\n");

    return 0;
}