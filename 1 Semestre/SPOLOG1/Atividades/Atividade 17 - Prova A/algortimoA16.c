#include <stdio.h>

int main() {
    float r1, r2, r3;
    float total, media, p_primeiro, p_terceiro;

    printf("Digite a pontuacao do robo 1: ");
    scanf("%f", &r1);
    printf("Digite a pontuacao do robo 2: ");
    scanf("%f", &r2);
    printf("Digite a pontuacao do robo 3: ");
    scanf("%f", &r3);

    total = r1 + r2 + r3;
    media = total / 3.0;

    float primeiro, terceiro;

    if (r1 >= r2 && r1 >= r3) {
        primeiro = r1;
        terceiro = (r2 < r3) ? r2 : r3;
    } else if (r2 >= r1 && r2 >= r3) {
        primeiro = r2;
        terceiro = (r1 < r3) ? r1 : r3;
    } else {
        primeiro = r3;
        terceiro = (r1 < r2) ? r1 : r2;
    }

    p_primeiro = (primeiro / total) * 100;
    p_terceiro = (terceiro / total) * 100;

    printf("\nPontuacao media geral: %.2f\n", media);
    printf("Total de pontos do 1o colocado (vencedor): %.2f (%.2f%% do total)\n", primeiro, p_primeiro);
    printf("Total de pontos do 3o colocado (ultimo): %.2f (%.2f%% do total)\n", terceiro, p_terceiro);

    return 0;
}