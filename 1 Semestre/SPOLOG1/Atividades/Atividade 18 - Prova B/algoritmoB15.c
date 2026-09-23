#include <stdio.h>

int main() {
    float n1, n2, n3;
    float total, p_segundo, p_terceiro;
    float primeiro, segundo, terceiro;

    printf("Digite a nota do candidato 1: ");
    scanf("%f", &n1);
    printf("Digite a nota do candidato 2: ");
    scanf("%f", &n2);
    printf("Digite a nota do candidato 3: ");
    scanf("%f", &n3);

    total = n1 + n2 + n3;

    if (n1 >= n2 && n1 >= n3) {
        primeiro = n1;
        if (n2 >= n3) {
            segundo = n2;
            terceiro = n3;
        } else {
            segundo = n3;
            terceiro = n2;
        }
    } else if (n2 >= n1 && n2 >= n3) {
        primeiro = n2;
        if (n1 >= n3) {
            segundo = n1;
            terceiro = n3;
        } else {
            segundo = n3;
            terceiro = n1;
        }
    } else {
        primeiro = n3;
        if (n1 >= n2) {
            segundo = n1;
            terceiro = n2;
        } else {
            segundo = n2;
            terceiro = n1;
        }
    }

    p_segundo = (segundo / primeiro) * 100;
    p_terceiro = (terceiro / segundo) * 100;

    printf("\nTotal geral de pontos: %.2f\n", total);
    printf("Primeiro colocado (1o lugar): %.2f pontos\n", primeiro);
    printf("Segundo colocado (2o lugar): %.2f pontos (%.2f%% dos pontos do 1o lugar)\n", segundo, p_segundo);
    printf("Terceiro colocado (3o lugar): %.2f pontos (%.2f%% dos pontos do 2o lugar)\n", terceiro, p_terceiro);

    return 0;
}